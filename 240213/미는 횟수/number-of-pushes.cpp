#include <iostream>
#include <string>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;
    int len_a = a.length();
    int cnt = 0;
    for(int i = 0; i < len_a; i++){
        a = a.substr(len_a - 1, 1) + a.substr(0, len_a - 1);
        cnt++;
        if(a == b){
            break;
        }
    }
    if(cnt == len_a){
        cnt = -1;
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}