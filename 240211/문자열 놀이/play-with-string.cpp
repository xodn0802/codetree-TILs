#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    int q;
    cin >> s >> q;

    for(int i = 0; i < q; i++){
        int n, a, b;
        cin >> n;

        if(n == 1){
            cin >> a >> b;
            int cnt;
            cnt = s[a - 1];
            s[a - 1] = s[b - 1];
            s[b - 1] = cnt;
            cout << s << endl;
            continue;
        } 
        else if(n == 2){
            char m, n;
            cin >> m >> n;
            for(int j = 0; j < s.length(); j++){
                if(s[j] == m){
                    s[j] = n;
                }
            }
            cout << s << endl;
            continue;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}