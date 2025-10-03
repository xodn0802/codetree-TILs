#include <iostream>

using namespace std;

int N, B;
int cnt = 0;
int digit[20] = {};

int main() {
    cin >> N >> B;
    if(B == 4){
        while(true){
            if(N < 4){
                digit[cnt++] = N;
                break;
            }
            digit[cnt++] = N % 4;
            N /= 4;
        }
        for(int i = cnt - 1; i >= 0; i--){
            cout << digit[i];
        }
        return 0;
    }
    else if(B == 8){
        while(true){
            if(N < 8){
                digit[cnt++] = N;
                break;
            }
            digit[cnt++] = N % 8;
            N /= 8;
        }
        for(int i = cnt - 1; i >= 0; i--){
            cout << digit[i];
        }
        return 0;
    }

    // Please write your code here.

    return 0;
}