#include <iostream>

using namespace std;

int N;
int arr[1000];
int cnt = 0;


int main() {
    cin >> N;
    int max = 0;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if(i == 0 || arr[i-1] == arr[i]){
            cnt++;
        }else{
            if(max <= cnt) max = cnt;
            cnt = 0;
        }
    }
    cout << max+1;
    

    // Please write your code here.

    return 0;
}