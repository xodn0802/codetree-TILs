#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string a, b, c, d;
    cin >> a >> b;

    int len_a = a.length();
    int len_b = b.length();

    for(int i = 0; i < len_a; i++){
        if(isdigit(a[i]) != 0){
            c += a[i];
        }

    }
    for(int i = 0; i < len_b; i++){
        if(isdigit(b[i]) != 0){
            d += b[i];
        }
    }

    cout << stoi(c) + stoi(d);
    // 여기에 코드를 작성해주세요.
    return 0;
}