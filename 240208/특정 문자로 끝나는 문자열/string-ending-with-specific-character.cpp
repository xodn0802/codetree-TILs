#include <iostream>
#include <string>
using namespace std;
int main() {
    string arr[10];
    char a;
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }
    cin >> a;

    for(int i = 0; i < 10; i++){
        int n = arr[i].length();
        if(arr[i][n - 1] == a){
            cout << arr[i] << endl;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}