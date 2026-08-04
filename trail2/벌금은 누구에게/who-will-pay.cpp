#include <iostream>

using namespace std;

int N, M, K;
int a;
int student[10000] = {0};

int main() {
    cin >> N >> M >> K;

    for (int i = 0; i < M; i++) {
        cin >> a;
        student[a]++;
        if(student[a] >= K){
            cout << a;
            return 0;
        }
    }
    cout << -1;

    // Please write your code here.

    return 0;
}