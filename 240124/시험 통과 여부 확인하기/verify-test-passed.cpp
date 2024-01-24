#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    if (n >= 80) {
        cout << "pass";

        return 0;
    }

    else {
        cout << 80 - n << " more score";

        return 0;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}