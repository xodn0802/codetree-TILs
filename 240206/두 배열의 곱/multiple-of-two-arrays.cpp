#include <iostream>
using namespace std;
int main() {
    int i, j, k, n;
    int arr[3][3];
    int brr[3][3];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cin >> brr[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cout << arr[i][j] * brr[i][j] << " ";
        }
        cout << endl;
    }


    // 여기에 코드를 작성해주세요.
    return 0;
}