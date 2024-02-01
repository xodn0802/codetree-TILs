#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    for(int i = 1; i <= 4; i++){
        for(int j = b; j >= a; j--){
            cout << j << " * " << 2 * i << " = " << j * 2 * i;
            if(j > a){
                cout << " / ";
            }
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}