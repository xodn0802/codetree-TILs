#include <iostream>
#include <string>
using namespace std;
int main() {
    string a;
    cin >> a;

    int n = a.length();

    for(int i = 0; i < n; i++){
        if(a[i] == 'e'){
            a.erase(i, 1);
            break;
        }
    }
    cout << a;
    // 여기에 코드를 작성해주세요.
    return 0;
}