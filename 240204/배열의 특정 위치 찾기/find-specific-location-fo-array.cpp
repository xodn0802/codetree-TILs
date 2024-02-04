#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int sum = 0;
    int sum_val = 0;
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }
    for(int i = 1; i < 10; i += 2){
        sum += arr[i];
    }
    cout << fixed;
    cout.precision(1);
    double av = arr[2] + arr[5] + arr[8];
    cout << sum << " " << (double)av / 3;


    // 여기에 코드를 작성해주세요.
    return 0;
}