#include <iostream>
using namespace std;

int main() {
    int a, b;
    int sum = 0;   
    cin >> a >> b;
    if(a < b) {
        for(int i = a; i <= b; i++) {
            if(i % 5 == 0) {
                sum += i;
            }
        }

    }
    else if(a > b) {
        for(int x = b; x <= a; x++) {
            if(x % 5 == 0) {
                sum += x;
            }
        }
    }
    else if(a == b){
        if(a == 5){
            cout << a;
        }
    }
    cout << sum; // 여기에 코드를 작성해주세요.
    return 0;
}