#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    string arr[20];
    cin >> n;
    char a;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> a;
    int cnt = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(arr[i][0] == a){
            cnt++;
            sum += arr[i].length();
        }
    }
    cout << fixed;
    cout.precision(2);

    cout << cnt << " " << (double)sum / cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}