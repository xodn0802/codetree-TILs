#include <iostream>
using namespace std;

int cnt = 0;

int F(int n){
    if(n == 1){
        return 0;
    }
    if(n % 2 == 0){
    
        return F(n/2) + 1;
    }
    else {
        return F(n/3) + 1;
    }
}

int main() {
    int m;
    cin >> m;
    cout << F(m);
    // 여기에 코드를 작성해주세요.
    return 0;
}