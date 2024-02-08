#include <iostream>
#include <string>
using namespace std;
int main() {
    string arr[10];
    for(int i = 0; i < 10; i++){
        cin >> arr[i];

    }
    for(int i = 9; i >= 0; i--){
        cout << arr[i] << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}