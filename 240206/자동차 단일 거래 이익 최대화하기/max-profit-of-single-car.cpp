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

    int min = arr[0];
    int m = 0;
    for(int i = 0; i < n; i++){
        if(min > arr[i]){
            min = arr[i];
            m = i;
        }
    }
    int max = arr[m];
    for(int i = m + 1; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }

    }
    cout << max - min;
    // 여기에 코드를 작성해주세요.
    return 0;
}