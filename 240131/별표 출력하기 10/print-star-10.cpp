#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < 2 * n; i++) {
        if(i % 2 == 1) {
            for(int j = 0; j < n - (i - 1) / 2; j++) {
                cout << "* ";
            }
        }
        else {
            for(int j = 0; j < 1 + (i / 2); j++) {
                cout << "* ";
            }
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}