#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cin >> n;

    for(int i = n; i <= 100; i++) {
        sum += i;
    }

    cout << sum;
        // 여기에 코드를 작성해주세요.
    return 0;
}