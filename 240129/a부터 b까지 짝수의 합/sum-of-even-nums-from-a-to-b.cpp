#include <iostream>
using namespace std;

int main() {
    int a, b;
    int cnt = 0;
    cin >> a >> b;

    for(int i = a; i <= b; i++) {
        if(i % 2 == 0) {
            cnt += i;
        }
    }
    cout << cnt;
        // 여기에 코드를 작성해주세요.
    return 0;
}