#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int k = 0; k < n - i; k++) {
             for(int j = 0; j < n - i; j++) {
            cout << "*";
            }
            cout << " ";

        }
        cout << endl;
       
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}