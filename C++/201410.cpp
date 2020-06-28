/*
定义堆栈类模板Stack（先进后出），栈的大小由使用者确定。
要求该类模板对外提供如下二种基本操作：(1)push入栈 （2）pop出栈，用数组来实现
*/
#include <iostream>
using namespace std;
template <class T, int size>
class Stack {
    T x[size];
    int current;

   public:
    Stack() { current = 0; }
    void push(T a) {
        if (current < size - 1) {
            x[current] = a;
            current++;
        } else {
            cout << 'Stack已满';
            exit(0);  // 表示程序成功终止,通常在程序main函数结束时在return语句中使用.
        }
    }
    T pop() {
        if (current == 0) {
            cout << 'Stack为空';
        } else {
            return x[current--];
        }
    }
};
