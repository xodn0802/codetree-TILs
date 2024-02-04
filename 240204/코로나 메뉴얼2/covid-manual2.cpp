#include <iostream>
using namespace std;
int main() {
    int arr[3];
    char brr[3];
    int cnt_a = 0;
    int cnt_b = 0;
    int cnt_c = 0;
    int cnt_d = 0;
    for(int i = 0; i < 3; i++){
        cin >> brr[i] >> arr[i];
        if(brr[i] == 'Y' && arr[i] >= 37){
            cnt_a++;
        }
        else if(brr[i] != 'Y' && arr[i] >= 37){
            cnt_b++;
        }
        else if(brr[i] == 'Y' && arr[i] < 37){
            cnt_c++;
        }
        else {
            cnt_d++;
        }
            
    }
    cout << cnt_a << " " << cnt_b << " " << cnt_c << " " << cnt_d << " ";
    if(cnt_a >= 2)
        cout << 'E';

    // 여기에 코드를 작성해주세요.
    return 0;
}