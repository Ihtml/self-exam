#include <iostream>
using namespace std;
// 已知带头节点的单链表类型定义如下：
typedef struct node {
    int data;
    struct node* next;
} ListNode;
typedef ListNode* LinkList;
// 编写算法，在一个头指针为head且带头结点的单链表中，//删除所有结点数据域值为x的结点
LinkList delnode(LinkList head, int x){
    LinkList p = head, temp=p->next;
    while (p && temp){
        if (p->next->data == x){
            p->next = temp->next;
            free(temp);
            temp = p->next;
        }else{
            p = p->next;
            temp = p->next;
        }
    }
    return head;
}