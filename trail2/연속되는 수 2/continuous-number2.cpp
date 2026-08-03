#include <iostream>

using namespace std;

int N;
int arr[1000];
int cnt = 1;
int a = 0;


int main() {
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if(i > 0){
            if(arr[i] == arr[i-1]){
            cnt++;
        }else{
           a=max(a,cnt);
           cnt=1;
        }
        }
        
    }
    a = max(a,cnt);
    cout << a;

    

    // Please write your code here.

    return 0;
}