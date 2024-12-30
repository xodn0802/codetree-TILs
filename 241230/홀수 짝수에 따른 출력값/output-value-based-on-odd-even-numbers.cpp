#include <iostream>
using namespace std;

int Funtion(int n){
    if(n == 1){
        return 1;
    }
    else if(n == 2){
        return 2;
    }

    if(n % 2 == 0){
        return Funtion(n-2) + n;
    }
    else{
        return Funtion(n-2) + n;
    }
}

int main() {
    int m;
    cin >> m;
    cout << Funtion(m);
    // 여기에 코드를 작성해주세요.
    return 0;
}