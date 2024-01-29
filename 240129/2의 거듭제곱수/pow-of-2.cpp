#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0;
    int prod = 1;
    while(1) {
        if(prod != n){
            prod *= 2;
            x++;
        }
        else if(prod == n) {
            break;
        }
    }
    cout << x;
    // 여기에 코드를 작성해주세요.
    return 0;
}