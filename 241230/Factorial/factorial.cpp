#include <iostream>
using namespace std;

int Factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return Factorial(n-1)*n;
}

int main() {
    int m;
    cin >> m;
    cout << Factorial(m);
    // 여기에 코드를 작성해주세요.
    return 0;
}