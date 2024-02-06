#include <iostream>
#include <climits>
using namespace std;
int main() {
    int arr[10];
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }

    int max = INT_MIN;
    int min = INT_MAX;

    for(int i = 0; i < 10; i++){
        if(max < arr[i] && arr[i] < 500){
            max = arr[i];
        }
    } 
    for(int i = 0; i < 10; i++){
        if(min > arr[i] && arr[i] > 500){
            min = arr[i];
        }
    }
    cout << max << " " << min;
    // 여기에 코드를 작성해주세요.
    return 0;
}