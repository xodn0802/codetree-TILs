#include <iostream>
using namespace std;

int funtion(int n,int arr[]){
    if(n == 1){
        return arr[0];
    }
    int max = arr[n-1];
    int num = funtion(n-1,arr);
    if(max > num){
        return max;
    }
    else{
        return num;
    }


}
int main() {
    int arr1[100];
    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> arr1[i];
    }
    cout << funtion(m,arr1);
    
    // 여기에 코드를 작성해주세요.
    return 0;
}