#include <iostream>
using namespace std;
// 已知带头节点的单链表类型定义如下：
typedef struct node {
    int data;
    struct node* next;
} ListNode;
typedef ListNode* LinkList;
//  编写原型为int Listisequal(Linklist A, LinkList
//  B)的函数，指针A、B分辨指向两个带头结点的单链表
// 函数功能是：若单链表A、B中全部对应节点的data值相等，则返回1，否则返回0
int Listisequal(LinkList A, LinkList B) {
    LinkList pa, pb;
    pa = A;
    pb = B;
    while (pa->next && pb->next) {
        if (pa->next->data != pb->next->data) {
            return 0;
        }
        pa = pa->next;
        pb = pb->next;
    }
    if (pa->next == pb->next == NULL) {
        return 1;
    }
    return 0;
}

// answer
int Listisequal(LinkList A, LinkList B) {
    LinkList pa, pb;
    pa = A->next;
    pb = B->next;
    while (pa->data == pb->data) {
        pa = pa->next;
        pb = pb->next;
    }
    if (pa->next == NULL && pb->next == NULL) {
        return 1;
    }
    return 0;
}