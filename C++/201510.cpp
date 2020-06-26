/*
定义一个抽象类Shape，由它派生3个类：Square(正方形)、Trapezoid(梯形)、和Triangle(三角形)。
用虚函数分别计算几种图形面积，并求它们的和。
要求用基类指针数据，使它没一个元素指向一个派生类对象。
*/
#include <iostream>
using namespace std;
class Shape {
   public:
    virtual double area() const = 0;
};
class Square : public Shape {
    double side;

   public:
    Square(double s) : side(s) {}
    double area() const { return side * side; }
};
class Trapezoid : public Shape {
    double a, b, h;

   public:
    Trapezoid(double i, double j, double k) : a(i), b(j), h(k) {}
    double area() const { return (a + b) * h / 2; }
};
class Triangle : public Shape {
    double a, h;

   public:
    Triangle(double i, double k) : a(i), h(k) {}
    double area() const { return a * h / 2; }
};
int main() {
    Shape* p[3];
    Square se(5);
    Trapezoid td(2, 4, 5);
    Triangle tg(3, 5);
    p[0] = &se;
    p[1] = &td;
    p[2] = &tg;
    double total = 0;
    for (int i = 0; i < 3; i++) {
        total += p[i]->area();
    }
    cout << "总面积是：" << total << endl;
}