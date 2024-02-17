#include <iostream>
using namespace std;
int Add(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum / 10;
}
int main() {
    int x;
    cin >> x;

    int cnt = Add(x);
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}