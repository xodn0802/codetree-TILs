#include <iostream>
using namespace std;

int main() {
    int a, b, c, d; // 수학 a, c 영어 b, d
    cin >> a >> b >> c >> d;

    if (a == c && b < d) {
        cout << 'B';
    }
    else if (a == c && d < b) {
        cout << 'A';
    }
    else if(a > c) {
        cout << 'A';
    }
    else {
        cout << 'B';
    }


        // 여기에 코드를 작성해주세요.
    return 0;
}