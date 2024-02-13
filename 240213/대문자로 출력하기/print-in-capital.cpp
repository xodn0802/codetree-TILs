#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();

    for(int i = 0; i < n; i++){
        if(isalpha(s[i]) != 0)
        cout << (char)toupper(s[i]);
    }


	return 0;

}