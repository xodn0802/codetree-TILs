#include <iostream>
using namespace std;
int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        cout << a;
        return 0;
    }
    if (b >= a && b >= c) {
        cout << b;
        return 0;
    }
    if (c >= a && c >= b){
        cout << c;
        return 0;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}