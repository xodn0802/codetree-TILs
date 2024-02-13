#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;

    int a = 0;

    for(int i = 0; i < n; i++){
        int b;
        cin >> b;
        a += b;
    }
    string x = to_string(a);

    int y = x.length();
    x = x.substr(1, y - 1) + x.substr(0,1);
    cout << x;
    // 여기에 코드를 작성해주세요.
    return 0;
}