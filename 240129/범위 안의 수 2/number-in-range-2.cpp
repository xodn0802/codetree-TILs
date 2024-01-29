#include <iostream>
using namespace std;

int main() {
    int a;
    int sum = 0;
    int b = 0;
    double av;

    for(int i = 1; i <= 10; i++) {
        cin >> a;
        if(a >= 0 && a <= 200) {
            sum += a;
            b++;
        }
    }
    cout << fixed;
    cout.precision(1);
    av = (double)sum / b;

    cout << sum << " " << av;
    // 여기에 코드를 작성해주세요.
    return 0;
}