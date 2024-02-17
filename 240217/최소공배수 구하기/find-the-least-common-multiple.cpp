#include <iostream>
using namespace std;
void Prime(int n, int m) {
    int cnt;
    for(int i = n * m; i >= 1; i--){
        if(i % n == 0 && i % m == 0){
            cnt = i;
        }
    }
    cout << cnt;
}
int main() {
    int x, y;
    cin >> x >> y;
    Prime(x, y);
    
    // 여기에 코드를 작성해주세요.
    return 0;
}