#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if (a > b && a > c) {
        if (b > c) {
            cout << b;
        }
        else {
            cout << c;
        }
    }
    if (b > a && b > c){
        if (a > c) {
            cout << a;
        }
        else {
            cout << c;
        }
    }
    if (c > a && c > b) {
        if (a > b) {
            cout << a;
        }
        else {
            cout << c;
        }
    }
        // 여기에 코드를 작성해주세요.
    return 0;
}