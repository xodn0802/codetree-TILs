#include <iostream>
#include <string>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;

    int sum = a + b;

    string x = to_string(sum);

    int n = x.length();
    int cnt = 0;

    for(int i = 0; i < n; i++){
        if(x[i] == '1'){
            cnt++;
        }
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}