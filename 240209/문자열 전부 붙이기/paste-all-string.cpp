#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string a[10];
    string b = {};
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b += a[i];
    }

    cout << b;

        // 여기에 코드를 작성해주세요.
    return 0;
}