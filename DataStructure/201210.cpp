#include <iostream>
using namespace std;
// 二叉树的存储结构定义如下
typedef struct node {
    int data;
    struct node *lchild, *rchild;
} BinNode;
typedef BinNode* BinTree;
// 编写递归算法,求只有一个孩子结点的总数，并计算这些结点的数据值的和
// *count和*sum的初值为0
void f34(BinTree T, int* count, int* sum) {
    if (T == NULL) {
        return;
    }
    if ((T->lchild && (!T->rchild)) || (T->rchild && (!T->lchild))) {
        (*sum) += T->data;
        (*count)++;
    }
    f34(T->lchild, count, sum);
    f34(T->rchild, count, sum);
}
