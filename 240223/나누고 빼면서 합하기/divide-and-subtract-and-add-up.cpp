#include <iostream>
using namespace std;

int n, m;
int arr[100];
int cnt = 0;

void Change(int a){
    
    while(a > 0){
        if(a % 2 == 0){
            cnt += arr[a - 1];
            //cout << cnt << endl;
            a /= 2;
            
            
        }
        else {
            cnt += arr[a - 1];
            //cout << cnt << endl;
            a -= 1;
            
            
        } 

        
    }
    //cout << cnt;
}

int main() {


    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    Change(m);
    cout << cnt;

    // 여기에 코드를 작성해주세요.
    return 0;
}