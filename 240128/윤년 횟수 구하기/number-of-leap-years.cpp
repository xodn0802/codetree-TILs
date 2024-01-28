#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 0;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(i % 4 == 0) {
            if(i % 100 == 0 && i % 400 != 0){

            }
            else {
                cnt++;
            }
        }
        
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}