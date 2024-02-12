#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    cout << s << endl;

    for(int i = 0; i < n; i++){
        s = s.substr(n - 1, 1) + s.substr(0, n - 1);
        cout << s << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}