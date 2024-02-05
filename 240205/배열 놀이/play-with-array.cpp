#include <iostream>
using namespace std;
int main() {
    int n, q, x, a, b;
    cin >> n >> q;
    int arr[100];
    int idx = -1;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < q; i++){
        cin >> x;
        if(x == 1){
            cin >> a;
            cout << arr[a - 1] << endl;
            continue;

        }
        else if(x == 2){
            cin >> a;
            for(int i = 0; i < n; i++){
                if(arr[i] == a){
                    idx = i;
                    break;
                }
            }
            if(idx == -1){
                cout << 0 << endl;
                
            }
            else{
                cout << idx + 1 << endl;
            
            }
            continue;
            
        }
        else if(x == 3){
            cin >> a >> b;
            for(int i = a; i <= b; i++){
                cout << arr[i - 1] << " ";
            }
            cout << endl;
            continue;

        }

    }

    // 여기에 코드를 작성해주세요.
    return 0;
}