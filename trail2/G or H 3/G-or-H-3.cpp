#include <iostream>
#include <algorithm>

using namespace std;

int N, K;
int x[100];
char c[100];
char y[10000];

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> c[i];
    }
    for(int i = 0; i < N; i++){
        int f = x[i];
        y[f] = c[i];
        f = 0;
    }
    int max_cnt = 0;
    for(int i = 1; i <= 10000-K+1; i++){
        int cnt = 0;
        for(int j = i; j <= i + K; j++){
            if(y[j] == 'G') cnt++;
            else if(y[j] == 'H') cnt += 2;
        }
        max_cnt = max(max_cnt, cnt);
    }
    cout << max_cnt;
    // Please write your code here.

    return 0;
}