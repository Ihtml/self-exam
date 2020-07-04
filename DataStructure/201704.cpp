#include <iostream>
using namespace std;
typedef struct node {
    int data;
    struct node *lchild, *rchild;
} BinNode;
typedef BinNode* BinTree;
// 编写函数，计算任意二叉树T在其数据域的值大于或等于x的结点的格式并返回该值

int SearchXNum(BinTree T, int x) {
    int total = 0;
    if (T == NULL) {
        return 0;
    }
    if (T->data >= x) {
        total = 1;
    } else {
        total = 0;
    }
    return total + SearchXNum(T->lchild, x) + SearchXNum(T->rchild, x);
}