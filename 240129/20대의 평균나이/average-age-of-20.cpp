#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 0;
    int a = 0;
    double av;

    while(1){
        cin >> n;
        if(n >= 20 && n <= 29) {
            cnt += n;
            a++;
        }
        else {
            break;
        }
    }
    cout << fixed;
    cout.precision(2);

    av =(double)cnt / a;
    cout << av;

    // 여기에 코드를 작성해주세요.
    return 0;
}