#include <iostream>
using namespace std;
int main() {
    int arr[2][4];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }
    
    
    for(int i = 0; i < 2; i++){
        cout << fixed;
        cout.precision(1);
        int sum = 0;
        double av = 0;

        for(int j = 0; j < 4; j++){
            sum += arr[i][j]; 
        }
        av = (double)sum / 4;
        cout << av << " ";

    }
    cout << endl;
    for(int j = 0; j < 4; j++){
        cout << fixed;
        cout.precision(1);
        int sum = 0;
        double av = 0;

        for(int i = 0; i < 2; i++){
            sum += arr[i][j];
        }
        av = (double)sum / 2;
        cout << av << " ";
    }
    cout << endl;
    
    cout << fixed;
    cout.precision(1);
    int sum = 0;
    double av = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            sum += arr[i][j];
        }
    }
    av = (double)sum / 8;
    cout << av;

    // 여기에 코드를 작성해주세요.
    return 0;
}