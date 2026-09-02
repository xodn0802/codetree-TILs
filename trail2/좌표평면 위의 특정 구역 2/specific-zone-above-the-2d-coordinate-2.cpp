#include <iostream>

using namespace std;

int N;
int x[100], y[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }
    double min_sq = 1600000000;
    for(int i = 0; i < N; i++){
        int max_x = 0;
        int max_y = 0;
        for(int j = 0; j < N; j++){
            if(i == j) continue;
            for(int k = 0; k < N; k++){
                if(k == i) continue;
                if(k == j) continue;
                max_x = max(max_x,abs(x[j]-x[k]));
                max_y = max(max_y,abs(y[j]-y[k]));
            }
            
        }
        double xy = max_x * max_y;
        min_sq = min(min_sq,xy);
    }
    cout << min_sq;

    // Please write your code here.

    return 0;
}