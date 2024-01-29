#include <iostream>
using namespace std;

int main() {
    int a, b;
    int prod = 1;
    cin >> a >> b;
    if(b > 0) {
        for(int i = 1; i <= b; i++) {
            prod *= a;
        }
    }
    else if(b == 0){
        cout << 1;
        return 0;
    }
    cout << prod;
    // 여기에 코드를 작성해주세요.
    return 0;
}