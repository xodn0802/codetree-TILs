#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string arr[10];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum = 0;
    int cnt = 0;
    char a = 'a';
    for(int i = 0; i < n; i++){
        sum += arr[i].length();
        if(arr[i][0] == a){
            cnt++;
        }
    }
    cout << sum << " " << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}