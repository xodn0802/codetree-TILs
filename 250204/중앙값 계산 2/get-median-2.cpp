#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sort(arr,arr + i + 1);
        if(i % 2 == 0){
            cout << arr[i / 2] << " ";
        }
    }

    // Write your code here!

    return 0;
}