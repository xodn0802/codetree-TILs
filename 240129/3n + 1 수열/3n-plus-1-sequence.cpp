#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 0;
    cin >> n;
    while(1) {

        if(n == 1){
            break;
        }
        if(n % 2 == 0){
            n /= 2;
            cnt++;
        }
        else if(n % 2 == 1) {
            n = 3 * n + 1;
            cnt++;
        }
       
    }
    cout << cnt;
        // 여기에 코드를 작성해주세요.
    return 0;
}