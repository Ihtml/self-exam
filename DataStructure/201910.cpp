#include <iostream>
using namespace std;
// 已知带有头肩点的单链表定义如下
typedef struct node {
    int data;
    struct node* next;
} ListNode;
typedef ListNode* LinkList;
// 编写函数，在带头结点的单链表L中删除指定数值范围内(x≤ data ≤y)的结点。
void f34(LinkList L, int x, int y) {
    LinkList p = L, temp;
    while (p->next != NULL) {
        if (x <= p->next->data && p->next->data <= y) {
            temp = p->next;
            p->next = temp->next;
            free(temp);
        } else {
            p = p->next;
        }
    }
}
