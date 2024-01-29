#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int cnt = 0;
    while(1) {
        if(n >= 1000) {
            break;
        }
        else if(n % 2 == 0){
            n = 3 * n + 1;
            cnt++;
        }
        else {
            n = 2 * n + 2;
            cnt++;
        }
    }
    cout << cnt;

    // 여기에 코드를 작성해주세요.
    return 0;
}