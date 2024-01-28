#include <iostream>
using namespace std;

int main() {
    int n;
    int sum_val = 0;
    cin >> n;

    for(int i = 1; i <= 10; i++) {
        int a;
        cin >> a;
        if(a % 2 == 1 && a % 3 == 0) {
            sum_val += a;
        }


    }
    cout << sum_val;
    // 여기에 코드를 작성해주세요.
    return 0;
}