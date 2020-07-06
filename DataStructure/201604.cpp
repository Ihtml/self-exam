#include <iostream>
using namespace std;
// 实现算法，对含有n个整数的数组A进行选择排序

void f34(int A[], int n) {
    int i, j, temp;
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (j = i + 1; j < n; j++) {
            if (A[j] < A[min])  // 找到目前最小值
            {
                min = j;
            }
        }
        if (min != i) {
            temp = A[min];  // 交换两个变数
            A[min] = A[i];
            A[i] = temp;
        }
        // swap(&A[min], &A[i]);  // 做交换
    }
}

// void swap(int* a, int* b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }