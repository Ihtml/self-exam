/*
n个单链表的表头指针保存在数组A中，单链表的结构如下；
设计算法，在多个链表中查找值为key的元素，查找成功返回1，查找失败返回0。
*/
#include <stdio.h>
#define MAXSIZE 100
typedef int DataType;
typedef struct node {
    DataType data;
    struct node* next;
} Node;
typedef Node* SeqList[MAXSIZE];
int f34(SeqList A, int n, int key) {
    Node* p;
    for (int i = 0; i < n; i++) {
        p = A[i];
        while (p != NULL && p->data != key) {
            p = p->next;
        }
        if (p != NULL) {
            return 1;
        }
    }
    return 0;
}