#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 0;

    for(int i = 1; i <= 10; i++) {
        cin >> n;
        if(n % 2 == 1){
            cnt++;
        }
    }
    cout << cnt;
    
        // 여기에 코드를 작성해주세요.
    return 0;
}