#include <iostream>
using namespace std;
int main() {
    char a;
    cin >> a;
    if(a == 'z'){
        cout << 'a';
        return 0;
    }
    char b = (int)a + 1;
    cout << b;

    // 여기에 코드를 작성해주세요.
    return 0;
}