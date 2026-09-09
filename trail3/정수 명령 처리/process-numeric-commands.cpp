#include <iostream>
#include <string>
using namespace std;

int arr[10001];
int it = 0;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int N;
    cin >> N;
    while (N--) {
        string cmd;
        cin >> cmd;
        if (cmd == "push") {
            int v; cin >> v;
            arr[it++] = v;
        } else if (cmd == "pop") {
            if (it == 0) cout << -1 << '\n';
            else cout << arr[--it] << '\n';
        } else if (cmd == "size") {
            cout << it << '\n';
        } else if (cmd == "empty") {
            cout << (it == 0 ? 1 : 0) << '\n';
        } else if (cmd == "top") {
            if (it == 0) cout << -1 << '\n';
            else cout << arr[it - 1] << '\n';
        }
    }
    return 0;
}