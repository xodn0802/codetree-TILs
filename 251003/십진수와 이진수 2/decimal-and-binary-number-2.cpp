#include <iostream>

using namespace std;

string N;
int arr2[100];
int cnt = 0;

int main() {
    cin >> N;
    int num = 0;
    int arr[N.length()];
    
    for(int i = 0; i < N.length(); i++){
        arr[i] = N[i]-'0';
    }
    for(int i = 0; i < N.length(); i++){
        num = num * 2 + arr[i];
    }
    
    int num2 = 17 * num;

    while(1){
        if(num2 < 2){
            arr2[cnt++] = num2;
            break;
        }
        arr2[cnt++] = num2 % 2;
        num2 /= 2;
    }
    for(int i = cnt -1; i >= 0; i--){
        cout << arr2[i];
    }
    // Please write your code here.

    return 0;
}