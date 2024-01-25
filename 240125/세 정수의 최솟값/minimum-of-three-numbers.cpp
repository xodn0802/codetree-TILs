#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;
    
    //a가 가장 작은경우
    if (a <= b && a <= c){
        cout << a;
    }
    //b가 가장 작은경우
    else if(b <= a && b <= c) {
        cout << b;
    }
    //c가 가장 작은경우
    else {
        cout << c;
    }

    //해설 봄
    // 여기에 코드를 작성해주세요.
    return 0;
}