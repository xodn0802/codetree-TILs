#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int sum = 0;
    int cnt = 0;

    for(int i = 0; i < 10; i++){
        cin >> arr[i];
        if(arr[i] % 2 == 0 && arr[i] != 0){
            sum += arr[i];
            cnt++;
        }
        if(arr[i] == 0)
            break;
    }
    cout << cnt << " " << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}