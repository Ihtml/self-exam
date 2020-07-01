#include <iostream>
using namespace std;
typedef struct node {
    int data;
    struct node *lchild, *rchild;
} BinNode;
typedef BinNode* BinTree;
// 编写递归算法，对于给定的一颗二叉树，计算并返回所有结点data域的值之和。
int f34(BinTree T) {
    int leftSum = 0, rightSum = 0;
    if (T == NULL) {
        return 0;
    } else {
        if (T->lchild != NULL) {
            leftSum = f34(T->lchild);
        }
        if (T->rchild != NULL) {
            rightSum = f34(T->rchild);
        }
        return leftSum + rightSum + T->data;
    }
}