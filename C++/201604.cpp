/*
定义一个图形类(figure),
其中有保护类型的成员数据：高度height和宽度width，一个共有的构造函数；
由该图形类建立两个派生类：矩形类和等腰三角形类。
在每个派生类中都包含一个函数area(),分别用来计算矩形和等腰三角形的面积；
*/
#include <iostream>
using namespace std;
class figure {
   protected:
    double height, width;

   public:
    figure(double h, double w) {
        height = h;
        width = w;
    }
};
class triangle : public figure {
   public:
    triangle(double h = 0, double w = 0) : figure(h, w) {}
    double area() { return height * width / 2; }
};
class rectangle : public figure {
   public:
    rectangle(double h = 0, double w = 0) : figure(h, w) {}
    double area() { return height * width; }
};

int main() {
    triangle tri(2, 3);
    rectangle rec(2, 3);
    cout << "The area of triangle is:" << tri.area() << endl;
    cout << "The area of rectangle is:" << rec.area() << endl;
    return 0;
}