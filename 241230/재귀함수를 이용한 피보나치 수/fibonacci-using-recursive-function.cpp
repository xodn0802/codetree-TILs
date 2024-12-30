#include <iostream>
using namespace std;

int Fibo(int n){
    if(n == 1){
        return 1;
    }
    else if(n == 2){
        return 1;
    }
    return Fibo(n-1) + Fibo(n-2);
}

int main() {
    int m;
    cin >> m;
    cout << Fibo(m);
    // 여기에 코드를 작성해주세요.
    return 0;
}