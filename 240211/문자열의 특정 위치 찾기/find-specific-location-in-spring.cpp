#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    char alpa;
    int n = -1;
    cin >> s >> alpa;

    
    for(int i = 0; i < s.length(); i++){
        if(s[i] == alpa){
            n = i;
            break;
        }
    }
    if(n == -1){
        cout << "No";
    }
    else {
        cout << n;
    }
    


    // 여기에 코드를 작성해주세요.
    return 0;
}