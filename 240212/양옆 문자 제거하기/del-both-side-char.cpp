#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.length();
    s.erase(1,1);
    s.erase(n - 3,1);
    cout << s;
    // 여기에 코드를 작성해주세요.
    return 0;
}