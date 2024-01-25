#include <iostream>
using namespace std;

int main() {
    char a;
    
    cin >> a;
    
    if (a == 'S') {
        cout << "Superior";
        return 0;
    }    
    else if (a == 'A') {
        cout << "Excellent";

        return 0;
    }
    else if (a == 'B') {
        cout << "Good";

        return 0;
    }
    else if (a == 'C') {
        cout << "Usually";
        return 0;
    }
    else if (a == 'D') {
        cout << "Effort";

        return 0;
    }

    cout << "Failure";
    // 여기에 코드를 작성해주세요.
    return 0;
}