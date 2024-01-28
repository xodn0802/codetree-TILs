#include <iostream>
using namespace std;

int main() {
    int a, b;
    int sum = 0;
    int c = 0;
    double av;
    
    cin >> a >> b;

    for(int i = a; i <= b; i++) {
        if(i % 5 == 0 || i % 7 == 0) {
            sum += i;
            c++;
        }
    }
    av = (double)sum / c;
    cout << fixed;
    cout.precision(1);
    
    cout << sum << " " << av;
    
    // 여기에 코드를 작성해주세요.
    return 0;
}