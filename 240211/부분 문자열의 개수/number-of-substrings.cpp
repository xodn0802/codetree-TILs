#include <iostream>
#include <string>
using namespace std;
int main() {
    string A, B;
    cin >> A >> B;

    int len_a = A.length();
    int len_b = B.length();
    int cnt_1 = 0;

    for(int i = 0; i < len_a - len_b + 1; i++){
        int cnt = 0;
        for(int j = 0; j < len_b; j++){
            if(A[i + j] == B[j]){
                cnt++;
            }

        }
        if(cnt == 2){
            cnt_1++;
        }
    }
    cout << cnt_1;
    // 여기에 코드를 작성해주세요.
    return 0;
}