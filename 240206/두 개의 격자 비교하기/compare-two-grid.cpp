#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int arr[10][10];
    int brr[10][10];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> brr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == brr[i][j]){
                cout << 0 << " ";
            }
            else {
                cout << 1 << " ";
            }
        }
        cout << endl;
    }

    
    // 여기에 코드를 작성해주세요.
    return 0;
}