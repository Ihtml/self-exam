// 声明复数类Complex,该类中有两个私有变量real,image分别表示一个复数的实部和虚部。
// 为Complex类添加适当的构造函数，并使用友元函数add实现复数加法
#include <iostream>
using namespace std;
class Complex {
    double real, image;

   public:
    Complex(double r = 0, double i = 0) {
        real = r;
        image = i;
    }
    void setRI(double a, double b) {
        real = a;
        image = b;
    }
    double getReal() { return real; }
    double getImage() { return image; }
    void print() {
        if (image > 0) {
            cout << "复数:" << real << " + " << image << "i" << endl;
        }
        if (image < 0) {
            cout << "复数:" << real << " - " << image << "i" << endl;
        }
    }
    friend Complex add(Complex c1, Complex c2);  // 声明友元函数
};
Complex add(Complex c1, Complex c2) {
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.image = c1.image + c2.image;
    return c3;
}
int main() {
    Complex c1(19, 0.864), c2, c3;
    c2.setRI(90, 125.012);
    c3 = add(c1, c2);
    cout << "复数一:";
    c1.print();
    cout << "复数二:";
    c2.print();
    cout << "相加后:";
    c3.print();
}
