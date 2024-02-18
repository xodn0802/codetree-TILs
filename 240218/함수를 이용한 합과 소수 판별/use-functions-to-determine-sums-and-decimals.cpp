#include <iostream>
using namespace std;
bool Prime(int n){

    for(int i = 2; i < n; i++){
        if(n == 1){
            return false;
        }
        else if(n % i == 0){
            return false;
        }

    }
    if(((n % 10) + (n / 10)) % 2 == 0){
        return true;
    }
    else {
        return false;
    }
    


}
int main() {
    int a, b;
    int cnt = 0;
    cin >> a >> b;

    for(int i = a; i <= b; i++){
        if(Prime(i)){
            cnt++;
        }
    }
    cout << cnt;

    // 여기에 코드를 작성해주세요.
    return 0;
}