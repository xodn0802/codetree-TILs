#include <iostream>
#include <algorithm>

using namespace std;


int n;
int A[100];
int B[100];

int main() {
    bool same = true;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    sort(A, A + n);

    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    sort(B, B + n);

    for(int i = 0; i < n; i++){
        if(A[i] != B[i]){
            same = false;
            break;
        }
    }
    if(same == true){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    // Write your code here!

    return 0;
}