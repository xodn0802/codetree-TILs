#include <iostream>
using namespace std;

int main() {
    int a, b;
    char c;
    
    while(1){
        cin >> a >> b >> c;
        cout << a * b << endl;
        if(c == 'C'){
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}