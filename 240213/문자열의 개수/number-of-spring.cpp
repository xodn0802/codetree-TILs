#include <iostream>
#include <string>
using namespace std;
int main() {
    string s[200];
    int cnt = 0;
    for(int i = 0; i < 200; i++){
        
        cin >> s[i];
        if(s[i] == "0")
            break;
        cnt++;

    }
    cout << cnt << endl;
    for(int i = 0; i < cnt; i += 2){
        cout << s[i] << endl;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}