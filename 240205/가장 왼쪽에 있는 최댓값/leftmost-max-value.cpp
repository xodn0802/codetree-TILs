#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[1000];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int max_val = -1;
    int m = 0;
    int end;
    end = n;
    while(1) {
        for(int i = 0; i < end; i++){
            if(max_val < arr[i]){
                max_val = arr[i];
                m = i;
                
            }

        }
        cout << m + 1 << ' ';
        end = m;
        max_val = -1;
        if (m==0){
            break;
        }
    }


    
        

    



    // 여기에 코드를 작성해주세요.
    return 0;
}