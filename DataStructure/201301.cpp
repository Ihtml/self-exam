#include <iostream>
using namespace std;
// 二叉排序树的类型定义如下
typedef struct node {
    char data;
    struct node *lchild, *rchild;
} * BSTree;
// 编写递归算法从小到大输出二叉排序树T中所有data域值大于m且小于n的数据
void f34(BSTree T, int m, int n) {
    if (T== NULL) {
        return;
    }
    f34(T->lchild, m, n);
    if (m < T->data && T->data < n) {
        cout << T->data;
        // printf("%d", T->data);
    }
    f34(T->rchild, m, n);
}
