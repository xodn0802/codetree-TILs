#include <iostream>
using namespace std;

int main() {
int n;
cin >> n;
int arr[100];

for(int i = 0; i < n; i++){
    cin >> arr[i];
}
for(int i = 1; i < 10; i++){
    int cnt = 0;
    for(int j = 0; j < n; j++){
        if(arr[j] == i){
            cnt++;
        }
    }
    cout << cnt << endl;
}
    // 여기에 코드를 작성해주세요.
    return 0;
}