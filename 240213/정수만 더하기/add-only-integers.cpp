#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.length();
    int a = 0;

    for(int i = 0; i < n; i++){
        if(isdigit(s[i]) != 0){
            a += (s[i] - '0');
        
        }
    }
    cout << a;

    // 여기에 코드를 작성해주세요.
    return 0;
}