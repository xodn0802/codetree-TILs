#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2, c = 3;

    int x = a + b + c;

    a = b = c = x;

    cout << a << " " << b << " " << c;
    // 여기에 코드를 작성해주세요.
    return 0;
}