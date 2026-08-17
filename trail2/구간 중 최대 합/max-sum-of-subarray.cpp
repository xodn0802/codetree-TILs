#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int arr[100];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int cnt = 0;
    for(int i = 0; i <= n-k; i++){
        int max_val = 0;
        for(int j = i; j < i+k; j++){
            max_val += arr[j];
        }
        cnt = max(cnt,max_val);
    }
    cout << cnt;
    // Please write your code here.

    return 0;
}