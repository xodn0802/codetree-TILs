#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cin >> n;

    int arr[99];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    //최댓값 구하기
    int max_val = INT_MIN;
    for(int i = 0; i < n; i++){
        if(max_val < arr[i]){
            max_val = arr[i];
        }
    }
    //가장 큰 수와 두번째로 큰 수
    int second_max = INT_MIN;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != max_val && second_max < arr[i]){
            second_max = arr[i];
        }
        if(arr[i] == max_val){
            cnt++;
            if(cnt >= 2){
                second_max = max_val;
                break;
            }
        }
    }
    cout << max_val << " " << second_max;

    // 여기에 코드를 작성해주세요.
    return 0;
}