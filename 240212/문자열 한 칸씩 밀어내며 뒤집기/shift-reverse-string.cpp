#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;

    int n;
    cin >> s >> n;
    int len_s = s.length();
    
    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        if(m == 1){
            s = s.substr(1, len_s-1) + s.substr(0, 1);
            cout << s << endl;
            continue;
        }
        else if(m == 2){
            s = s.substr(len_s-1, 1) + s.substr(0, len_s - 1);
            cout << s << endl;
            continue; 
        }
        else if(m == 3){
            string a;
            for(int j = len_s - 1; j >= 0; j--){
                a += s[j];
            }
            cout << a << endl;
            s = a;
            continue;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}