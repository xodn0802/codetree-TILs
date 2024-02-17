#include <iostream>
using namespace std;
void Prime(int n, int m) {
    int cnt;
    if(n >= m){
        for(int i = 1; i < n; i++){
            
            if(n % i == 0 && m % i == 0){
                cnt = i;
            }
        }
        cout << cnt;
    }
    else {
        for(int i = 1; i < m; i++){
            
            if(n % i == 0 && m % i == 0){
                cnt = i;
            }
        }
        cout << cnt;
    }
}
int main() {
    int x, y;
    cin >> x >> y;

    Prime(x, y);

    // 여기에 코드를 작성해주세요.
    return 0;
}