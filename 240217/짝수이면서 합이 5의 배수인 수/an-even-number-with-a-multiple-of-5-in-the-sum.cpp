#include <iostream>
using namespace std;
bool Prime(int n) {
    return n % 2 == 0 && ((n / 10) + (n % 10)) % 5 == 0;
}
int main() {
    int n;
    cin >> n;
    if(Prime(n)){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}