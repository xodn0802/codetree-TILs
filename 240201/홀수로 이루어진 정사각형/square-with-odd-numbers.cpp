#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < 2 * n; i += 2){
        for(int j = 0; j <2 * n; j += 2) {
            cout << 11 + i + j << " ";
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}