#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    for(int i = 1; i <= a; i++) {
        int b = i / 8;
        int c = i % 7;
        if((i % 2 == 0 && i % 4 != 0) || b % 2 == 0 || c < 4) {
            continue;
        }
        cout << i << " ";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}