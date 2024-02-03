#include <iostream>
using namespace std;
int main() {
    int n;
    cin >>n;

    double arr[5];
    double sum = 0;
    int cnt = 0;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
        cnt++;
    }
    cout << fixed;
    cout.precision(1);
    double av = (double)sum / cnt;
    if(av >= 4.0){
        cout << av << endl << "Perfect";
    }
    else if(av >= 3.0){
        cout << av << endl << "Good";
    }
    else {
        cout << av << endl << "Poor";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}