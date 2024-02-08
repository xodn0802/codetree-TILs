#include <iostream>
#include <string>
using namespace std;
int main() {
    string arr;
    cin >> arr;

    string st ="";

    if(arr.length() % 2 == 0){
        for(int i = arr.length() - 1; i >= 0; i -= 2){
            st += arr[i];
        }
    }
    else{
        for(int i = arr.length() - 2; i >= 0; i -= 2){
            st += arr[i];
        }
    }


    cout << st;
    // 여기에 코드를 작성해주세요.
    return 0;
}