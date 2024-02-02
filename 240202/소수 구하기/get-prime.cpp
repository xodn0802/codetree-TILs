#include <iostream>
using namespace std;
int main() {
    int n;
    int cnt;
    int prod;
    cin >> n;
    for(int i = 1; i <= n; i++){
        prod = 1;
        cnt = 0;
        for(int j = 1; j<= i; j++){
            if(i % j == 0){
                cnt++;
            }
            
        }
        if(cnt == 2){
            prod *= i;
            cout << prod << " ";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}