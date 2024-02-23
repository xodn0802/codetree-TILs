#include <iostream>
#include <string>
using namespace std;

int n;
string A;

void Function(string a){
    string s;
    for(int i = n - 1; i >= 0; i--){
        s += a[i];
        
    }
    if(s == a){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}

int main() {
    
    
    cin >> A;
    n = A.length();
    Function(A);

    // 여기에 코드를 작성해주세요.
    return 0;
}