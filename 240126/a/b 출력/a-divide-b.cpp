#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    //정수 부분 출력
    cout << a / b << ".";

    //a를 b로 나눈 나머지를 시작으로 소수점 자리를 하나씩 계산
    a %=b;

    for (int i = 0; i < 20; i++){
        a *= 10;
        cout << a / b;

        a %= b;        
    }

    //cout.precision(20);

    //cout << a / b;


    // 여기에 코드를 작성해주세요.
    return 0;
}