#include <iostream>
using namespace std;
void Double(int a, int b) {
    int cnt = 1;
    for(int i = 1; i <= b; i++){
        cnt *= a;

    }
    cout << cnt;
}
int main() {
    int a, b;
    cin >> a >> b;

    Double(a,b);
    // 여기에 코드를 작성해주세요.
    return 0;
}