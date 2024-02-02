#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> m;
    
    for(int i = 1; i <= m; i++){
        cin >> n;
        int cnt = 0;
        while(1){
            if(n == 1){
                cout << cnt << endl;
                break;
            }
            else if(n % 2 == 0){
                n /= 2;
                cnt++;
            }
            else {
                n = 3 * n + 1;
                cnt++;
            }
        }
        
        
    

        

    }
    // 여기에 코드를 작성해주세요.
    return 0;
}