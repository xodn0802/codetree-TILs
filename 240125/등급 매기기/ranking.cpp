#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    if (n >= 90) { 
        cout << 'A';

        return 0;

    }
    else if (n >= 80) {
        cout << 'B';

        return 0;
    }
    else if (n >= 70) {
        cout << 'C';

        return 0;
    }
    else if (n >= 60) {
        cout << 'D';

        return 0;
    }
    
    cout << 'F';
        // 여기에 코드를 작성해주세요.
    return 0;
}