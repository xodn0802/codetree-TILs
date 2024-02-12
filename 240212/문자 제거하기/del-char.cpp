#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.length();

    while(n > 1){
        int m;
        cin >> m;
        if(m >= n){
            s.erase(n-1,1);
            cout << s << endl;
            n--;
            continue;
        }
        else if(m < n){
            s.erase(m,1);
            cout << s << endl;
            n--;
            continue;
            
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}