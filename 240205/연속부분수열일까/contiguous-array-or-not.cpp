#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int A[100];
    int B[100];
    int cnt = 0;

    for(int i = 0; i < n1; i++){
        cin >> A[i];
    }
    for(int i = 0; i < n2; i++){
        cin >> B[i];
    }

    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(B[j] == A[i] && B[j + 1] == A[i + 1]){
                cnt++;
                break;
            }
            else {
                continue;
                
            }
            
        }

    }
    if(cnt >= 1){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}