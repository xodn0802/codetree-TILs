#include <iostream>
using namespace std;
int Prime(int n) {
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
        }

    }
    if(n == 1){
        return 0;
    }
    return n;
}
int main() {
    int a, b;
    int sum = 0;
    cin >> a >> b;

    for(int i = a; i <= b; i++){
        sum += Prime(i);
    }
    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}