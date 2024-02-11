#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    

    for(int i = 2; i < n; i++){
        if(s[i] == s[0]){
            s[i] = s[1];
        }
        else if(s[i] == s[1]){
            s[i] = s[1];
        }
        

    }
    char a = s[0];
    s[0] = s[1];
    s[1] = a;
    
    cout << s;

        // 여기에 코드를 작성해주세요.
    return 0;
}