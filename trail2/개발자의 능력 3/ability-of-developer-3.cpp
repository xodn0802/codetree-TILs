#include <iostream>
#include <cmath>

using namespace std;

int abilities[6];

int getDiff(int x, int y, int z){
    int sum1 = abilities[x] + abilities[y] + abilities[z];
    int sum2 = 0;
    for(int i = 0; i < 6; i++){
        sum2 += abilities[i];
    } 
    sum2 -= sum1;
    return abs(sum1 - sum2);
}

int main() {
    for (int i = 0; i < 6; i++) {
        cin >> abilities[i];
    }
    int min_diff = 1000001;
    for(int i = 0; i < 6; i++){
        for(int j = i + 1; j < 6; j++){
            for(int k = j + 1; k < 6; k++){
                min_diff = min(min_diff,getDiff(i,j,k));
            }
        }
    }
    cout << min_diff;
    // Please write your code here.

    return 0;
}