#include <iostream>
using namespace std;

void Printnum(int n){
    if(n == 0)
        return;
    Printnum(n-1);
    cout << n << " ";
}

void PrintNumber2(int m){
    if(m == 0)
        return;
    cout << m << " ";
    PrintNumber2(m-1);
}

int main() {
    int N;
    cin >> N;
    Printnum(N);
    cout << endl;
    PrintNumber2(N);

    // 여기에 코드를 작성해주세요.
    return 0;
}