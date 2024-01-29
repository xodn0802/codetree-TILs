#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    int b = 0;
    double av;

    cin >> n;
    int a;
    for(int i = 1; i <= n; i++) {
        cin >> a;
        sum += a;
        b++;


    }
    cout << fixed;
    cout.precision(1);

    av = (double)sum / b;

    cout << sum << " " << av;
    // 여기에 코드를 작성해주세요.
    return 0;
}