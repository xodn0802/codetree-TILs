#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;

    string x = to_string(n);

    int y = x.length();
    int a = 0;

    for(int i = 0; i < y; i++){
        a += x[i] - '0';
    }
    cout << a;
    // 여기에 코드를 작성해주세요.
    return 0;
}