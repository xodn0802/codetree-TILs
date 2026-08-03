#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];
int offset = 100;
int diff[202] = {};


int main() {
    cin >> n;
    int max = 0;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
        x1[i] += 100;
        x2[i] += 100;
        for(int j = x1[i]; j < x2[i]; j++){
            diff[j]++;
        }
    }
    for(int i = 0; i < 202; i++){
        if(diff[i] > max) max = diff[i];
    }
    cout << max;
    


    // Please write your code here.

    return 0;
}