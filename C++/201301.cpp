
#include <iostream>
#include <string>
using namespace std;
class str {
    string s;
    int n, a[100], j, l;

   public:
    str(string& a) {
        s = a;
        n = 0;
        j = 0;
        l = 0;
    }
    int test(string& a) {
        int j=0, k = s.size();
        if (s[0] != ' ') {
            n++;
        }
        for (int i = 1; i < k; i++) {
            if (s[i - 1] == ' ' && s[i] != ' ') {
                n++;
                l++;
            } else if (s[i - 1] != ' ' && s[i] != ' ') {
                l++;
            } else if (s[i] == ' ' && s[i - 1] != ' ') {
                a[j++] = i - l;
                // cout << a[j-1] << " ";
                l = 0;
            }
        }
        return n;
    }
    int*
    geta() {  // int* 相当于 int [],做形参的时候，int a[]与int *a无任何区别。
        return a;
    }
};

int main() {
    string s;
    getline(cin, s);
    str a(s);
    cout << a.test(s) << endl;
    // int* list = a.geta();
    // for (int i = 0; i < 10; i++) {
    //     cout << list[i] << endl;
    // }
    return 0;
}