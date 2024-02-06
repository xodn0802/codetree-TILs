#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[1000];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }


    int max_val = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(max_val < arr[j] - arr[i]){
                max_val = arr[j] - arr[i];
            }
        }
    }
    cout << max_val;
    // 여기에 코드를 작성해주세요.
    return 0;
}