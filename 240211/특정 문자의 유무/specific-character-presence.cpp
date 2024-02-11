#include <iostream>
#include <string>
using namespace std;
int main() {
    string  s;
    cin >> s;
    int length = s.length();
    bool y = false;
    bool x = false;

    
    if(s.find("ee") != string::npos){
        y = true;
    }
    if(s.find("ab") != string::npos){
        x = true;
    }
    
    if(y == true){
        cout << "Yes ";
    }
    else {
        cout << "No ";
    }
    if(x == true){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    



    // 여기에 코드를 작성해주세요.
    return 0;
}