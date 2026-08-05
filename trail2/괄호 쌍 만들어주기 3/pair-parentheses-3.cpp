#include <iostream>
#include <string>

using namespace std;

string A;
int cnt = 0;

int main() {
    cin >> A;
    for(int i = 0; i < A.length(); i++){
        for(int j = i; j < A.length(); j++){
            if(A[i] == ')') break;
            if(A[i] == A[j]) continue;
            cnt++;
        }
    }
    cout << cnt;
    // Please write your code here.

    return 0;
}