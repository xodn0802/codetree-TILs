#include <iostream>
#include <string>
using namespace std;

int len_m, len_n;
int indx = -1;

void Same(string a, string b){
    for(int i = 0; i < len_n - len_m + 1; i++){
        int cnt = 0;
        for(int j = 0; j < len_m; j++){
            if(a[i + j] == b[j]){
                cnt++;
            }
        }
        if(cnt == len_m){
            indx = i;
            cout << indx;
            break;
            
        }

        

    }
    if(indx == -1){
        cout << indx;
    }

}
int main() {
    string M, N;
    cin >> N >> M;

    len_m = M.length();
    len_n = N.length();
    Same(N, M);

    // 여기에 코드를 작성해주세요.
    return 0;
}


    // int len_m = m.length();
    // int len_n = n.length();
    // int index = -1;

    // for(int i = 0; i < len_m - len_n + 1; i++){
    //     int cnt = 0;
    //     for(int j = 0; j < len_n; j++){
    //         if(m[i + j] == n[j]){
    //             cnt++;

    //         }
        
    //     }
    //     if(cnt == len_n){
    //         index = i;
    //         break;
    //     }

    // }
    // cout << index;