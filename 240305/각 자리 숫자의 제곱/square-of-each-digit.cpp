#include <iostream>
using namespace std;

int Funtion(int n){
    if(n < 10){
        return n * n;
    }
    return Funtion(n / 10) + (n % 10) * (n % 10);
}

int main() {
    int n;
    cin >> n;

    cout << Funtion(n);

    // 여기에 코드를 작성해주세요.
    return 0;
}