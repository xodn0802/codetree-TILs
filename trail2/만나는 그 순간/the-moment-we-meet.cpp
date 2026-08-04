#include <iostream>

using namespace std;

int n, m;
char d[1000];
int t[1000];
char d2[1000];
int t2[1000];
int A[1000000] = {0};
int B[1000000] = {0};
int cnt = 0;
int a_cnt = 0;
int b_cnt = 0;
int main() {
    cin >> n >> m;
    int time_sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> d[i] >> t[i];
        time_sum += t[i];
    }

    for (int i = 0; i < m; i++) cin >> d2[i] >> t2[i];

    // Please write your code here.
    for(int i = 0; i < n; i++){
        if(d[i] == 'R'){
            for(int j = 0; j < t[i]; j++){
                cnt++;
                a_cnt++;
                A[cnt] = a_cnt;
            }
        }else{
            for(int j = 0; j < t[i]; j++){
                cnt++;
                a_cnt--;
                A[cnt] = a_cnt;
            }
        }
    }
    cnt = 0;
    for(int i = 0; i < m; i++){
        if(d2[i] == 'R'){
            for(int j = 0; j < t2[i]; j++){
                cnt++;
                b_cnt++;
                B[cnt] = b_cnt;
            }
        }else{
            for(int j = 0; j < t2[i]; j++){
                cnt++;
                b_cnt--;
                B[cnt] = b_cnt;
            }
        }
    }
    for(int i = 1; i < time_sum; i++){
        if(A[i] == B[i]){
            cout << i;
            return 0;
        }
    }
    cout << -1;

    return 0;
}