#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    string A;
    cin >> s >> A;
    int n = s.length();
    int p = A.length();

    for(int i = 0; i < p; i++){
        
        if(A[i] == 'L'){
            s = s.substr(1, n - 1) + s.substr(0, 1);
            
        }
        else if(A[i] == 'R'){
            s = s.substr(n - 1, 1) + s.substr(0, n - 1);
            
        }

    }
    cout << s;
    // 여기에 코드를 작성해주세요.
    return 0;
}