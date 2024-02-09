#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string arr[10];
    string b;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        b += arr[i];
    }

    for(int i = 0; i < 10000; i++){
        if(b[i] == 000){
            break;
        }        
        cout << b[i];
        if(i % 5 == 4){
            cout << endl;
        }

    }


    // 여기에 코드를 작성해주세요.
    return 0;
}