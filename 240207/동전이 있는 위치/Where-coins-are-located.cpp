#include <iostream>
using namespace std;
int main() {
    int n, m, r, c;
    cin >> n >> m;
    int arr[10][10];
    bool ex = false;

    for(int i = 0; i < m; i++){
        cin >> r >> c;
        arr[r - 1][c - 1] = 1;

    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 1){
                cout << 1 << " ";
            }
            else {
                cout << ex << " ";
            }
        }
        cout << endl;
    }


    // 여기에 코드를 작성해주세요.
    return 0;
}