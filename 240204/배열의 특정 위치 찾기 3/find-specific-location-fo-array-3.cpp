#include <iostream>
using namespace std;
int main() {
    int arr[100];
    for(int i = 0; i < 100; i++){
        cin >> arr[i];
        if(arr[i] == 0){
            cout << arr[i-1] + arr[i-2] + arr[i-3];
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}