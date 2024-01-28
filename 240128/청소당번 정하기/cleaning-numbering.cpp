#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt_1 = 0;
    int cnt_2 = 0;
    int cnt_3 = 0;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0){
            if(i % 12 == 0){
                cnt_3++;
            }
            else if(i % 3 == 0){
                cnt_2++;
            }
            else{
                cnt_1++;
            }
        }
        if(i % 2 != 0 && i % 3 == 0){
            if(i % 12 == 0){
                cnt_3++;
            }
            else{
                cnt_2++;
            }
        }
    }
    cout << cnt_1 << " " << cnt_2 << " " << cnt_3;
    // 여기에 코드를 작성해주세요.
    return 0;
}