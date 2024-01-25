#include <iostream>
using namespace std;

int main() {
    int a1, a2;
    char b1, b2;
    
    cin >> a1 >> b1;
    cin >> a2 >> b2;
    
    if (a1 >= 19 && b1 == 'M' || (a2 >= 19 && b2 == 'M')) {
        cout << 1;
    }
    else {
        cout << 0;
    }    // 여기에 코드를 작성해주세요.
    return 0;
}