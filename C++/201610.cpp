#include <iostream>
#include <string>
using namespace std;
class Person{
    protected:
        string name, Sex;
        int age;
    public:
        Person(string n, string s, int a){
            name = n;
            Sex = s;
            age = a;
        }
};
class Employee: public Person{
    string department;
    double salav;
    public:
        Employee(string n, string s, int a, string d, double sa):Person(n, s, a){
            department = d;
            salav = a;
        }
        void Display(){
            cout << "姓名：" << name << "性别：" << Sex << "年龄：" << age << "部门：" << department << "薪水：" << salav;
        }
};
int main(){
    Employee A("李四", "男", 24, "IT部", 10000);
    A.Display();
    return 0;
}