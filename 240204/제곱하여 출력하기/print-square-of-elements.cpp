#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[100];

    for(int i = 0; i < n; i++){
        cin >>arr[i];
    }
    for(int i = 0; i < n; i++){
        arr[i] *= arr[i];
    }
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}