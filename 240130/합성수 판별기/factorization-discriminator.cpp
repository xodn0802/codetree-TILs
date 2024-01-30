#include <iostream>
using namespace std;

int main() {
    int n;
    bool satisfied = false;
    cin >> n;
    if(n % 2 == 0 && n != 2) {
        satisfied = true;
    }
    else if(n % 3 == 0 && n != 3) {
        satisfied = true;
    }
    else if(n % 5 == 0 && n != 5) {
        satisfied = true;
    }
    else if(n % 7 ==0 && n != 7) {
        satisfied = true;
    }
    
    if(satisfied == true) {
        cout << 'C';
    }
    else {
        cout << 'N';
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}