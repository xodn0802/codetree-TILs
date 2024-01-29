#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 0;
    int av = 1;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        av *= i;
        int a = n / av;
        if(a <= 1){
            cnt++;
            break;
        }
        cnt++;
        
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}