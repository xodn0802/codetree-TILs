#include <iostream>
using namespace std;

int Pabo(int n){
    if(n == 1){
        return 1;
    }
    else if(n == 2)
        return 1;
    
    return Pabo(n - 1) + Pabo(n - 2);
}
int main() {
    int n;
    cin >> n;
    
    cout << Pabo(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}