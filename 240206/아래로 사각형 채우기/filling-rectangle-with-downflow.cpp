#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[10][10];

    
    for(int i = 0; i < n; i++){
        int x = i + 1;
        for(int j = 0; j < n; j++){
            cout << x << " ";
            x += n;

        }
        cout << endl;
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}