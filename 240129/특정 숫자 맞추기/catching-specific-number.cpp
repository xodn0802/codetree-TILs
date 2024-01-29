#include <iostream>
using namespace std;

int main() {
    int n;
    while(1) {
        cin >> n;
        if(n > 25) {
            cout << "Lower" << endl;
        }
        else if(n < 25) {
            cout <<"Higher" << endl;
        }
        else {
            cout << "Good";
            return 0;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}