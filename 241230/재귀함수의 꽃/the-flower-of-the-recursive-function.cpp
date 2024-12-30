#include <iostream>
using namespace std;

void Printnum(int n){
    if(n == 0)
        return;
    cout << n << " ";
    Printnum(n-1);
    cout << n << " ";
}
int main() {
    int N;
    cin >> N;
    Printnum(N);
    // 여기에 코드를 작성해주세요.
    return 0;
}