#include <iostream>
using namespace std;
void Change(int &a, int &b){
    if(a > b){
        a *= 2;
        b += 10;
    }
    else {
        a += 10;
        b *= 2;
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    Change(a, b);
    cout << a << " " << b;

    // 여기에 코드를 작성해주세요.
    return 0;
}