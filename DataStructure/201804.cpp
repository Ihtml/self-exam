#include <iostream>
using namespace std;
// 已知带有头肩点的单链表定义如下
typedef struct node {
    char ch;
    struct node* next;
} ListNode;
typedef ListNode* LinkList;

// 请编写函数int f34(LinkList h, char string[]),
// 根据输入的字符串，建立不含重复字符的链表
int f34(LinkList h, char string[]) {
    int len = strlen(string), ctn = 0;
    for (int i = 0; i < len; i++) {
        LinkList q = h;
        char c = string[i];
        while (q->next != NULL) {
            if (q->next->ch == c) { // 有头指针
                break;
            }
            q = q->next;
        }
        if (q->next == NULL) {
            LinkList temp = (LinkList)malloc(sizeof(LinkList));
            temp->ch = c;
            temp->next = NULL;
            q->next = temp;
            ctn++;
        }
    }
    return ctn;
}