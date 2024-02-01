#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 2;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << cnt << " ";
            cnt += 2;
            if(cnt > 8){
                cnt = 2;
            }

        }
        cout << endl;
    }
        // 여기에 코드를 작성해주세요.
    return 0;
}