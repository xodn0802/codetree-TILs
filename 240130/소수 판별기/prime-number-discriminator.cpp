#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 0;
    cin >> n;
    bool satisfied = true;

    for(int i = 2; i <= n; i++) {
        if(n % i == 0) {
            cnt++;
            if(cnt >= 2){
                satisfied = false;
                break;
            }
        }
    }
    if(satisfied == true) {
        cout << 'P';
    }
    else
        cout << 'C';
        // 여기에 코드를 작성해주세요.
    return 0;
}