#include <iostream>
using namespace std;

void Function(int *x){
    for(int i = 0; i < 100; i++){
        if(x[i] % 2 == 0){
            x[i] /= 2;
        }
        
            
        
    }
}

int main() {
    int n;
    int arr[100];

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    Function(arr);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}