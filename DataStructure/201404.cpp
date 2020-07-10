#include <iostream>
using namespace std;
// 已知带头节点的单链表类型定义如下：
typedef struct node {
    int data;
    struct node* next;
} ListNode;
typedef ListNode* LinkList;
// 设计算法在带头结点的单链表L中删除数据值最小的结点（设链表中各结点数据值绝不相同）
// first
void f34(LinkList L) {
    ListNode *p, *temp;
    int min;
    if (L->next) {
        min = L->next->data;
        temp = L->next;
    } else {
        return;
    }
    while (temp->next) {
        if (temp->next->data < min) {
            p = temp;
            min = temp->next->data;
        }
        temp = temp->next;
    }
    p->next = p->next->next;
}

// answer
void f34(LinkList L) {
    ListNode *p, *pre;  // pre指向数据值最小的结点之前的结点
    if (!L->next) {
        return;
    }
    pre = L;
    p = L->next;
    while (p->next) { // 查找数据值最小的结点
        if (p->next->data < pre->next->data) {
            pre = p;
        }
        p = p->next;
    }
    p = pre->next;
    pre->next = p->next;
    free(p);
}