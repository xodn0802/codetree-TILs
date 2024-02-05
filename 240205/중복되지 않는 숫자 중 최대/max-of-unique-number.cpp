#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[1000];
    int max_val = INT_MIN;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        if(max_val < arr[i]){
            int count = 0;
            for(int j = 0; j < n; j++){
                if(arr[j] == arr[i]){
                    count++;
                }
            }
            if(count == 1){
                max_val = arr[i];
            }
        }
    }

    cout << max_val;

    // 여기에 코드를 작성해주세요.
    return 0;
}