#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    
    cout << a << " ";
    

    for (int i = a; i < b;) {
        if(i % 2 == 0) {
            i += 3;
            if(i <= b){
                cout << i << " ";
            }
        
        }
        else if(i % 2 == 1) {
            i *= 2;
            if(i <= b){
                cout << i << " ";
            }
        
        }

    }
    // 여기에 코드를 작성해주세요.
    return 0;
}