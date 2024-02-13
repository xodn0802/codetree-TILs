#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string a, b, c, d;
    cin >> a >> b;

    int i = 0;
    int j = 0;

    while(isdigit(a[i]) != 0){
        
        c += a[i];
        i++;
    }
    while(isdigit(b[j]) != 0){
        d += b[j];
        j++;
    }

    cout << stoi(c) + stoi(d);
    // 여기에 코드를 작성해주세요.
    return 0;
}