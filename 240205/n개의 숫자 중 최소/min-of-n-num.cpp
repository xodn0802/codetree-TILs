#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[100];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int min_val = INT_MAX;
    for(int i = 0; i < n; i++){
        if(min_val > arr[i]){
            min_val = arr[i];
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(min_val == arr[i]){
            cnt++;
        }
    }
    cout << min_val << " " << cnt;

    // 여기에 코드를 작성해주세요.
    return 0;
}