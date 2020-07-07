// 已知顺序表SeqList定义如下
typedef struct {
    int key;
    int otherinf;
} RecType;
#define MAXSIZE 100000
typedef RecType SeqList[MAXSIZE + 1];
// 编写函数，用冒泡排序将n个元素的带排序列R按关键字降序排序
int f34(SeqList R, int n) {
    for (int i = n - 1; i >= 0; i--) {
        int flag = 0;
        for (int j = 0; j < i; j++) {
            if (R[j].key < R[j + 1].key) {
                RecType temp = R[j];
                R[j + 1] = R[j];
                R[j] = temp;
                flag = 1;
            }
        }
        if (flag == 0) {
            return 0;
        }
    }
    return 0;
}