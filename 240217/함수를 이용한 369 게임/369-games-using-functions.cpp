#include <iostream>
using namespace std;
bool six(int x){
    while(x > 0){
        if(x % 10 == 3 || x % 10 == 6 || x % 10 == 9){
            return true;
        }
        x /= 10;
    }
    return false;
}
bool sam(int n){
    return n % 3 == 0 || six(n);
}
int main() {
    int a, b;
    int cnt = 0;
    cin >> a >> b;

    for(int i = a; i <= b; i++){
        if(sam(i)){
            cnt++;
        }
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}