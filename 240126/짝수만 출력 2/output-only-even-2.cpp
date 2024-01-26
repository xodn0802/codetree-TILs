#include <iostream>
using namespace std;

int main() {
    int a, b, i;

    cin >> b >> a;
    
    i = b;

    while(i >= a) {
        cout << i << " ";
        i -= 2;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}