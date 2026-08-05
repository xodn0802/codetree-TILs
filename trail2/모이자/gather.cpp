#include <iostream>

using namespace std;

int n;
int A[100];
int diffsum = 0;
int min_val = 10000;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            diffsum += A[j] * abs(i-j);
        }
        if(diffsum < min_val) min_val = diffsum;
        diffsum = 0;
    }
    cout << min_val;

    // Please write your code here.

    return 0;
}