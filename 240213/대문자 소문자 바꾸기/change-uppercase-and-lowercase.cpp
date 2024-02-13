#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.length();

    for(int i = 0; i < n; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            cout << (char)tolower(s[i]);
        }
        else if(s[i] >= 'a' && s[i] <= 'z'){
            cout << (char)toupper(s[i]);
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}