#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string arr;
    cin >> arr >> n;

    if(arr.length() < n){
        for(int i = arr.length() - 1; i >= 0; i--){
            cout << arr[i];
        }
    }
    else {
        for(int i = arr.length() - 1; i >= arr.length() - n; i--){
            cout << arr[i];
        }
    }
        // 여기에 코드를 작성해주세요.
    return 0;
}