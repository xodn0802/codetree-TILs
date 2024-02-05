#include <iostream>
#include <climits>
using namespace std;
int main() {
    int arr[100];
    int n = 0;
    int max_val = INT_MIN;
    int min_val = INT_MAX;

    for(int i = 0; i < 100; i++){
        cin >> arr[i];
        n++;
        if(arr[i] == 999 || arr[i] == -999)
            break;
        
    }

    for(int i = 0; i < n; i++){
        if(max_val < arr[i] && arr[i] != 999){
            max_val = arr[i];
        }
        else if(min_val > arr[i] && arr[i] != -999){
            min_val = arr[i];
        }
    }
    cout << max_val << " " << min_val;



    // 여기에 코드를 작성해주세요.
    return 0;
}