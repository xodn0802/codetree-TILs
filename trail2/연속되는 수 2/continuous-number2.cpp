#include <iostream>

using namespace std;

int N;
int arr[1000];
int cnt = 0;
int a = 0;


int main() {
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if(i == 0 || arr[i] == arr[i-1]){
            cnt++;
        }else{
           a=max(a,cnt);
           cnt=0;
        }
    }
    cout << a+1;

    

    // Please write your code here.

    return 0;
}