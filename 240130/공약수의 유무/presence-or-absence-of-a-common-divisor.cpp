#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    bool satisfied = false;

    for(int i = a; i <= b; i++) {
        if(960 % i == 0){
            satisfied = true;
            break;
        }
    }
    if(satisfied == true)
        cout << 1;
    else 
        cout << 0;
    // 여기에 코드를 작성해주세요.
    return 0;
}