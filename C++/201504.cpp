#include <iostream>
using namespace std;
class Complex {
    double real, image;

   public:
    void setRI(double a, double b) {
        real = a;
        image = b;
    }
    double getReal() { return real; }
    double getImage() { return image; }
    void print() {
        if (image > 0) {
            cout << "复数：" << real << " + " << image << "i" << endl;
        }
        if (image < 0) {
            cout << "复数：" << real << " - " << image << "i" << endl;
        }
    }
    friend Complex add(Complex, Complex);  // 声明友元函数
    Complex(double a = 0, double b = 0);  // 声明构造函数，默认参数只能在声明里
};
Complex::Complex(double a, double b) {  // 声明了默认参数，定义时就不能再声明
    real = a;
    image = b;
}
Complex add(Complex c1, Complex c2) {  // 定义友元函数
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.image = c1.image + c2.image;
    return c3;
}
int main() {
    Complex c1(19, 0.864), c2, c3;
    c2.setRI(90, 125.012);
    c3 = add(c1, c2);
    cout << "复数一：";
    c1.print();
    cout << "复数二：";
    c2.print();
    cout << "相加后：";
    c3.print();
    return 0;
}