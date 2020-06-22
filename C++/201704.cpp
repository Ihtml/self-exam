#include <iostream>
#include <string>
using namespace std;
class birth {
    int year, month, day;

   public:
    birth(int y, int m, int d) {
        year = y;
        month = m;
        day = d;
    }
    void show() {
        cout << " 生日是：" << year << "年" << month << "月" << day << "日"
             << endl;
    }
};
class person {
    string name, gender;
    birth birthday;

   public:
    person(string n, string g, int y, int m, int d) : birthday(y, m, d) {
        name = n;
        gender = g;
    }
    void show() {
        cout << "姓名：" << name << " 性别为" << gender;
        birthday.show();
    }
};
int main() {
    person boy("李四", "男", 1990, 3, 23);
    boy.show();
}
