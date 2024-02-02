#include <iostream>
using namespace std;
int main() {
    int n, a, b;
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        int prod = 1;
        cin >> a >> b;
        for(int j = a; j <= b; j++){
            prod *= j;
        }
        cout << prod << endl;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}