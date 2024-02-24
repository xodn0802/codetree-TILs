#include <iostream>
using namespace std;
int arr[100];
int a1, a2;

void Funtion(int a, int b){
    int cnt = 0;
    for(int i = a; i <= b; i++){
        cnt += arr[i-1];
    }
    cout << cnt << endl;
}

int main() {
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < m; i++){
        cin >> a1 >> a2;
        Funtion(a1,a2);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}