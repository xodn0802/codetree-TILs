#include <iostream>
using namespace std;
int main() {
    int arr[11];
    cin >> arr[1] >> arr[2];
    cout << arr[1] << " " << arr[2] << " ";

    for(int i = 3; i < 11; i++){
        arr[i] = arr[i - 1] + arr[i - 2];
        cout << arr[i] % 10 << " ";
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}