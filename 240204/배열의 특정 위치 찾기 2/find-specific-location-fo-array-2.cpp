#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int sum1 = 0;
    int sum2 = 0;
    
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }
    for(int i = 1; i < 10; i += 2){
        sum1 += arr[i];
    }
    
    for(int i = 0; i < 10; i += 2){
        sum2 += arr[i];
    }
    

    if(sum1 >= sum2){
        cout << sum1 - sum2;
    }
    else
        cout << sum2 - sum1;
    // 여기에 코드를 작성해주세요.
    return 0;
}