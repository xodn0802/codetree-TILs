#include <iostream>
using namespace std;

int main() {
    int n;
    
    cin >> n;
    
    if (n < 0) {

        cout << "ice" << endl;

        return 0;

    }
    else if (n >= 100) {
        cout << "vapor";

        return 0;
    }   

    cout << "water";
     // 여기에 코드를 작성해주세요.
    return 0;
}