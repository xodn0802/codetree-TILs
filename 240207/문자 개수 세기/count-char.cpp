#include <iostream>
#include <string>
using namespace std;

int main() {
    string st;
    char a;
    getline(cin, st);
    cin >> a;
    int n = st.length();

    int count = 0;
    for(int i = 0; i < n; i++){
        if(st[i] == a)
            count++;
    }
    cout << count;
        // 여기에 코드를 작성해주세요.
    return 0;
}