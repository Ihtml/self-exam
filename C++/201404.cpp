/*
在三角形类tri实现两个函数，功能是出入三个顶点坐标判断是否构成等边三角形
写出两个函数的过程
*/
#include <math.h>

#include <iostream>
using namespace std;
class point {
    float x, y;

   public:
    void set(float a, float b) {
        x = a;
        y = b;
    }
    float getx() { return x; }
    float gety() { return y; }
};
class tri {
    point x, y, z;
    float s1, s2, s3;
    //
   public:
    void settri(float x1, float y1, float x2, float y2, float x3, float y3) {
        x.set(x1, y1);
        y.set(x2, y2);
        z.set(x3, y3);
    }
    void test() {
        s1 = sqrt((x.getx() - y.getx()) * (x.getx() - y.getx()) +
                  (x.gety() - y.gety()) * (x.gety() - y.gety()));
        s2 = sqrt((x.getx() - z.getx()) * (x.getx() - z.getx()) +
                  (x.gety() - z.gety()) * (x.gety() - z.gety()));
        s3 = sqrt((y.getx() - z.getx()) * (y.getx() - z.getx()) +
                  (y.gety() - z.gety()) * (y.gety() - z.gety()));
        if (s1 == s3 && s2 == s1) {
            cout << "三个顶点能构成等边三角形";
        } else {
            cout << "三个顶点不能构成等边三角形";
        }
    }
};