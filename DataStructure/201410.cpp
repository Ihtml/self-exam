#include <iostream>
using namespace std;
// 已知带头节点的单链表类型定义如下：
typedef struct node {
    int data;
    struct node* next;
} ListNode;
typedef ListNode* List_ptr;
// 编写函数实现单链表的原地翻转，要求在原链表上进行逆转，不允许申请新的表节点空间；

List_ptr InvertList(List_ptr head) {
    List_ptr p, temp;
    temp = head->next;
    head->next = NULL;
    while (temp != NULL) {
        p = temp; // p指向待处理链表中的第一个结点
        temp = temp->next; // temp指向下一个结点
        p->next = head->next; // 将P指向的结点插入到链表头
        head->next = p;
    }
    return head;
}