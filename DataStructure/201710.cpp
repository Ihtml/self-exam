#include <iostream>
using namespace std;
typedef struct node {
    int data;
    struct node *lchild, *rchild;
} BinNode;
typedef BinNode* BinTree;
// 编写递归算法，对于给定的一颗二叉树T,将其修改为镜像二叉树
void f34(BinTree T) {
    if (T == NULL) {
        return;
    }
    BinTree temp = T->lchild;
    T->lchild = T->rchild;
    T->rchild = temp;
    f34(T->lchild);
    f34(T->rchild);
}