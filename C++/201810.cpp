/*
设计一个圆类circle和一个桌子类table。
circle类包含私有数据成员radius和求圆面积的成员函数9etarea()；
table类包含私有数据成员height和返回高度的成员函数getheight()。
roundtable类继承所有上述类的数据成员和成员函数，添加了私有数据成员color和相应的成员函数。
*/
#include <iostream>
#include <string>
using namespace std;
class circle {
   private:
    double radius;

   public:
    circle(double r) { radius = r; }
    double getarea() { return 3.14 * radius * radius; }
};
class table {
   private:
    double height;

   public:
    table(double h) { height = h; }
    double getheight() { return height; }
};
class roundtable : public circle, public table {
   private:
    string color;

   public:
    roundtable(double r, double h, string c) : circle(r), table(h) {
        color = c;
    }
    string getcolor() { return color; }
};
int main() {
    roundtable rt(0.8, 1.2, "黑色");
    cout << "圆桌属性数据" << endl;
    cout << "高度:" << rt.getheight() << "米" << endl;
    cout << "面积:" << rt.getarea() << "平方米" << endl;
    cout << "颜色" << rt.getcolor() << endl;
    return 0;
}