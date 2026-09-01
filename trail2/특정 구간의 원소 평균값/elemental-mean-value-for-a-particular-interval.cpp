#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max_sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int sum_val = 0;
            for(int k = i; k <= j; k++){
                sum_val += arr[k];
            }
            int length = j-i+1;
            if(sum_val % length != 0){
                continue;
            }

            int avg = sum_val / length;
            bool is_exist = false; 
            for(int k = i; k <= j; k++){
                if(arr[k] == avg) {
                    is_exist = true;
                    break;
                }
            }

            if(is_exist){
                max_sum++;
            }
        
        }
    }
    cout << max_sum;

    // Please write your code here.

    return 0;
}