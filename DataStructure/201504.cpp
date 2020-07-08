#include <iostream>
using namespace std;
typedef struct node {
    char data;
    struct node *lchild, *rchild;
} BinNode;
typedef BinNode* BinTree;
// 后序遍历二叉树，输出遍历序列,root指向根节点
void PostOrder(BinTree root) {
    if (root == NULL) {
        return;
    }
    PostOrder(root->lchild);
    PostOrder(root->rchild);
    cout << root->data;
}