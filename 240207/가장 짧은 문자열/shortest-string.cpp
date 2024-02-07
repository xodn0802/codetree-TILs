#include <iostream>
#include <string>
using namespace std;
int main() {
    string st_1, st_2, st_3;
    cin >> st_1 >> st_2 >> st_3;

    int a = st_1.length();
    int b = st_2.length();
    int c = st_3.length();

    if(a >= b && a >= c){
        if(b > c){
            cout << a - c;
        }
        else {
            cout << a - b;
        }
    }
    else if (b >= a && b >= c){
        if(a > c){
            cout << b - c;
        }
        else {
            cout << b - a;
        }
    }
    else if(c >= a && c >= b){
        if(a > b){
            cout << c - b;
        }
        else {
            cout << c - a;
        }
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}