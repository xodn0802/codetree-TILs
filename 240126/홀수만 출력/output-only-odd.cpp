#include <iostream>
using namespace std;

int main() {
    int a, b, i;
    

    cin >> a >> b;

    for (i = 0; (a <= 2 * i + 1) && (2 * i + 1 <= b); i++) {
        cout << 2 * i + 1 << " ";
    }

    

    
        // 여기에 코드를 작성해주세요.
    return 0;
}