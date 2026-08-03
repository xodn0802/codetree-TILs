#include <iostream>

using namespace std;

int arr[2002][2002] = {};
int x1[3], y1[3];
int x2[3], y2[3];
int cnt = 0;

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];
    for(int i = 0; i < 3; i++){
        x1[i] += 1000;
        y1[i] += 1000;
        x2[i] += 1000;
        y2[i] += 1000;
    }
    for(int i = 0; i < 3; i++){
        for(int j = x1[i]; j < x2[i]; j++){
            for(int k = y1[i]; k < y2[i]; k++){
                arr[j][k]++;
            }
        }
    }
    for(int i = x1[0]; i < x2[0]; i++){
        for(int j = y1[0]; j < y2[0]; j++){
            if(arr[i][j] == 1) cnt++;
        }
    }
    for(int i = x1[1]; i < x2[1]; i++){
        for(int j = y1[1]; j < y2[1]; j++){
            if(arr[i][j] == 1) cnt++;
        }
    }
    cout << cnt;

    // Please write your code here.

    return 0;
}