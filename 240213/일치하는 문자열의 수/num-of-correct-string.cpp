#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        string a;
        cin >> a;
        if(s == a){
            cnt++;
        }
    }
    cout << cnt;
        // 여기에 코드를 작성해주세요.
    return 0;
}