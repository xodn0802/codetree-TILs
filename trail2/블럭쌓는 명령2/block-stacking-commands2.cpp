#include <iostream>
using namespace std;
int arr[100] = {};
int main() {
    // Please write your code here.
    int N, K,a,b;
    cin >> N >> K;
    
    int max = 0;
    for(int i = 0; i < K; i++){
        cin >> a >> b;
        for(int j = a; j <= b; j++){
            arr[j-1]++;
        }
    }
    for(int i = 0; i < N; i++){
        if(arr[i] > max) max = arr[i];
    }

    cout << max;
    return 0;
}