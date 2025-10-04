#include <iostream>

using namespace std;

int a, b;
string n;
int arr[100] = {};
int arr2[100] = {};
int num = 0;
int cnt = 0;

int main() {
    cin >> a >> b;
    cin >> n;

    for(int i = 0; i < n.length(); i++){
        arr[i] = (int)n[i] - '0';
    }
    for(int i = 0; i < n.length(); i++){
        num = num * a + arr[i];
    }
    while(true){
        if(num < b){
            arr2[cnt++] = num;
            break;
        }
        arr2[cnt++] = num % b;
        num /= b;
    }
    for(int i = cnt -1; i>=0; i--){
        cout << arr2[i];
    }



    // Please write your code here.

    return 0;
}