#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 1) {
            cout << "*";
        }
        else {
            for(int j = 1; j <= i; j++) {
                cout << "* ";
            }
        }
        cout << endl;
    }
        // 여기에 코드를 작성해주세요.
    return 0;
}