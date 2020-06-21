/*
声明一个circle类，有效数据成员Radius(半径,float型)，成员函数GetArea()计算圆的面积;
在main函数中声明一个circle类的对象c1,其半径为5.6 调用GetArea()函数计算c1的面积，
并显示该计算结果(cout << "圆的面积：" << c1.GetArea << endl;)
*/

#include <iostream>
using namespace std;
class circle {
    float Radius;

   public:
    circle(float r) { Radius = r; }
    double GetArea() { return 3.14 * Radius * Radius; }
};
int main() {
    circle c1(5.6);
    cout << "圆的面积：" << c1.GetArea() << endl;
    return 0;
}