#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    string a;
    bool ex = true;
    

    while(ex == true){

        cin >> s;
        if(s == "END"){
            break;
        }
        a = "";
        int n = s.length();
        for(int i = n - 1; i >= 0; i--){
            a += s[i];
        }
        cout << a << endl;


    }
    // 여기에 코드를 작성해주세요.
    return 0;
}