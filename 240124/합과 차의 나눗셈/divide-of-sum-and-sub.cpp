#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    cin >> a >> b;

    c = a + b;
    d = a - b;

    cout << fixed;
    cout.precision(2);

    cout << (double)c / d;
    // 여기에 코드를 작성해주세요.
    return 0;
}