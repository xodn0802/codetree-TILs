#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    if (n >= 3000) {
        cout << "book";

        return 0;

    }
    else if (n >= 1000) {
        cout << "mask";

        return 0;

    }

    cout << "no";
    // 여기에 코드를 작성해주세요.
    return 0;
}