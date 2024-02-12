#include <iostream>
using namespace std;
int main() {
    char a, b;
    cin >> a >> b;

    int x = (int)a;
    int y = (int)b;
    cout << x + y << " ";
    if(x > y){
        cout << x - y;
    }
    else {
        cout << y - x;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}