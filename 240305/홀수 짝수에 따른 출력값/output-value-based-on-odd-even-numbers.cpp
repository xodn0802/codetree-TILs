#include <iostream>
using namespace std;

int Fac(int n){
    if(n == 1){
        return 1;
    }
    if(n == 2)
        return 2;

    if(n % 2 == 0){
        return Fac(n - 2) + n;
    }
    else
        return Fac(n - 2) + n;
}
int main() {
    int n;
    cin >> n;

    cout << Fac(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}