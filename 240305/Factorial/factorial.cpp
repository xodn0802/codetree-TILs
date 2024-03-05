#include <iostream>
using namespace std;

int Fac(int n){
    if(n == 1)
        return 1;
    return Fac(n - 1) * n;
}
int main() {
    int n;
    cin >> n;

    cout << Fac(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}