#include <iostream>
using namespace std;
int main() {
    int arr[100];

    for(int i = 0; i < 100; i++){
        cin >> arr[i];
        if(arr[i] == 0){
            for(int j = 10; j >= 1; j--){
                int cnt = 0;
                for(int k = 0; k < i; k++){
                    if(arr[k] / 10 == j){
                        cnt++;
                    }
                }
                cout << j * 10 << " - " << cnt << endl; 
            }
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}