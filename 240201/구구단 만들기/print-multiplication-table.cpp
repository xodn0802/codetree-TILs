#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for(int i = 1; i <= 9; i++){
        for(int j = b; j >= a; j--){
            if(j % 2 == 0){
                cout << j << " * " << i << " = " << j * i;
                if(j > a){
                    cout << " / ";
                }
            }
        }
        cout << endl;

    }
        // 여기에 코드를 작성해주세요.
    return 0;
}