#include <iostream>
using namespace std;
class Test {
    int x, y;

   public:
    void init(int i, int j) {
        x = i;
        y = j;
    }
    void print() {
        cout << "测试结果：" << x << "-" << y << "=" << x - y << endl;
    }
};
int main() {
    Test a;
    a.init(2020, 20);
    a.print();
    // 测试结果：2020-20=2000
    return 0;
}