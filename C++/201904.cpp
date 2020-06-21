/*
声明一个交通工具(vehicle)基类，具有maxspeed、weight成员变量,run、stop成员函数；
同时编写vehicle类的构造函数和析构函数。由此派生出自行车类(bicycle)、汽车类(motorcar);
自行车类有高度(height)属性，汽车(motorcar)类有座位数(seatnum).
从bicycle和motor派生出摩托车类(motorcycle)
在继承过程中注意吧vehicle设置为虚基类；
*/
#include <iostream>
using namespace std;
class vehicle {
   private:
    int maxspeed;
    int weight;

   public:
    vehicle(int m, int w) {
        maxspeed = m;
        weight = w;
        cout << "vehicle 构造函数" << endl;
    }
    ~vehicle() { cout << "vehicle 析构函数" << endl; }
    void run() { cout << "车正在行进中......" << endl; }
    void stop() { cout << "车停止" << endl; }
};
class bicycle : virtual public vehicle {
   private:
    double height;

   public:
    bicycle(int m, int w, double h) : vehicle(m, w) { height = h; }
};
class motorcar : virtual public vehicle {
   private:
    int seatnum;

   public:
    motorcar(int m, int w, int a) : vehicle(m, w) { seatnum = a; }
};
class motorcycle : public bicycle, public motorcar {
   public:
    motorcycle(int m, int w, double h, int a)
        : bicycle(m, w, h), motorcar(m, w, a), vehicle(m, w) {}
};

// test
int main() {
    motorcycle a(60, 100, 1.5, 5);
    a.run();
    a.stop();
    // 测试结果：2020-20=2000
    return 0;
}
