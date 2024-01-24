#include <iostream>
using namespace std;

int main() {
    int c, k, b;

    cin >> c >> k;

    b = (k * 100 * 100) / (c * c);

    if (b >= 25){
        cout << b << endl << "Obesity";

        return 0;
    }

    

    cout << b;
    // 여기에 코드를 작성해주세요.
    return 0;
}