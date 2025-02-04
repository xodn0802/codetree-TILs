#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

int n;
int nums[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums, nums + n);

    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
    sort(nums, nums + n, greater<int>());
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }

    // Write your code here!

    return 0;
}
