#include <stdio.h>
typedef struct node {
    int data;
    struct node* next;
} ListNode;
typedef ListNode* List_ptr;
/*
单链表L中结点数不少于2.
设计算法判断L中存储的全部n个数据是否是斐波那契数列的前n项。
如果是，函数返回1，否则返回0.
*/
int IsF(List_ptr head) {
    List_ptr temp = head;
    int a = temp->data;
    int b = temp->next->data;
    temp = temp->next->next;
    if (a != 0 || b != 1) {
        return 0;
    }
    while (temp) {
        if (temp->data == a + b) {
            a = b;
            b = temp->data;
            temp = temp->next;
        } else {
            return 0;
        }
    }
    return 1;
}
