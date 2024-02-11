#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    char a = s[0];
    char b = s[1];

    for(int i = 1; i < s.length(); i++){
        if(s[i] == b){
            s[i] = a;
        }
    }
    cout << s;
    // 여기에 코드를 작성해주세요.
    return 0;
}