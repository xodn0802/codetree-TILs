#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int N;
int nums[2000];

int main() {
    cin >> N;
    int max = 0;

    for (int i = 0; i < 2 * N; i++) {
        cin >> nums[i];
    }
    sort(nums,nums + 2*N);

    for(int i = 0; i < N; i++){
        int max_sum = nums[i] + nums[2 * N - 1 - i];
        if(max_sum >= max){
            max = max_sum;
        }
    }

    cout << max << endl;

    // Write your code here!

    return 0;
}
