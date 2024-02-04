#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int arr[10] = {a};
    int brr[10] = {a};
    int crr[10] = {};
    int sum = 0;
    
    for(int i = 1; i < 11; i++){
        arr[i] = arr[i - 1] / b;
        
        brr[i] = arr[i - 1] % b;
        
        crr[brr[i]]++;
        if(arr[i] <= 1)
            break;
    }
    for(int i = 0; i < 10; i++){
        sum += crr[i] * crr[i];
    }
    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}