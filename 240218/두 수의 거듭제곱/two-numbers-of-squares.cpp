#include <iostream>
using namespace std;
void Double(int a, int b) {
    int c = a;
    for(int i = 0; i < b - 1; i++){
        a *= c;

    }
    cout << a;
}
int main() {
    int a, b;
    cin >> a >> b;

    Double(a,b);
    // 여기에 코드를 작성해주세요.
    return 0;
}