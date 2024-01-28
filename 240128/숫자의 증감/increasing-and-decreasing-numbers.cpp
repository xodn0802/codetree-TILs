#include <iostream>
using namespace  std;

int main() {
    char c;
    int n;
    cin >> c >> n;

    if(c == 'A') {
        for(int i = 1; i <= n; i++) {
            cout << i << " ";
        }
    }

    if(c == 'D') {
        for(int y = n; y >= 1; y--) {
            cout << y << " ";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}