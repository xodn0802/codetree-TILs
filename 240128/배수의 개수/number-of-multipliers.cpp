#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt_1 = 0;
    int cnt_2 = 0;

    for(int i = 1; i <= 10; i++) {
        cin >> n;
        if(n % 3 == 0){
            cnt_1++;
        }
        if(n % 5 == 0) {
            cnt_2++;
        }

    }

    cout << cnt_1 << " " << cnt_2;
        // 여기에 코드를 작성해주세요.
    return 0;
}