#include <iostream>
#include <algorithm>

using namespace std;


int n;
int A[100];
int B[100];

int main() {
    bool same;
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
        if(A[i] == B[i]){
            same = true;
        }
        else{
            same = false;
        }
    }
    if(same == true){
        cout << "Yes" << endl;
    }
    else if(n == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    // Write your code here!

    return 0;
}