#include <iostream>
using namespace std;

int n;
void Change(int *a) {
    for(int i = 0; i < n; i++){
        if(a[i] < 0 ){
            a[i] *= -1;
        }
        
    }
}

int main() {
    int arr[50];
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    Change(arr);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}