#include <iostream>
#include <string>
using namespace std;
int main() {
    string a, b, c, d;
    cin >> a >> b;

    c += a + b;
    d += b + a;

    cout << stoi(c) + stoi(d);

    // 여기에 코드를 작성해주세요.
    return 0;
}