#include <iostream>
#include <string>
using namespace std;
int main() {
    int a;
    string b;

    cin >> a;

    b = 100 - a > 0 ? "failure" : "pass";

    cout << b;
    // 여기에 코드를 작성해주세요.
    return 0;
}