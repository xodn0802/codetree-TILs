#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool satisfied = false;
    
    for(int i = a; i <= b; i++){
        if(i % c == 0){
            satisfied = true;
            break;
        }
    }
    if(satisfied == true) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}