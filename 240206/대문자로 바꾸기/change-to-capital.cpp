#include <iostream>
#include <string>
using namespace std;
int main() {
    int i, j;
    char arr[i][j];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
            arr[i][j] -= 32;
            cout << (char)arr[i][j] << " "; 
        }
        cout << endl;

    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}