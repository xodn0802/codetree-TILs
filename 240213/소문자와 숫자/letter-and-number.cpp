#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.length();

    for(int i = 0; i < n; i++){
        if(isalpha(s[i]) != 0 || isdigit(s[i]) != 0){
            cout << (char)tolower(s[i]);
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}