#include <iostream>
using namespace std;

int main() {
    double a, b;
    
    cin >> a >> b;
    
    if (a >= 1.0 && b >= 1.0) {
        cout << "High";
    }
    else if (a >= 0.5 && b >= 0.5) {
        cout << "Middel";

    }
    else {
        cout << "Low";
    }
        // 여기에 코드를 작성해주세요.
    return 0;
}