#include <iostream>
using namespace std;

void Funtion(int n) {
    if(n == 0)
        return;
    cout << n << " ";
    Funtion(n - 1);
    cout << n << " ";
}
int main() {
    int n;
    cin >> n;
    Funtion(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}