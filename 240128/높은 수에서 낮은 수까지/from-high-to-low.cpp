#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if(a < b) {
        for(int i = b; i >= a; i--){
            cout << i << " ";
            
        }
    }
    else if(a > b) {
        for(int x = a; x >= b; x--){
            cout << x << " ";
            
        }
    }
    else (a = b) {
        cout << a;
        
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}