#include <iostream>
#include <string>
using namespace std;
int main() {
    string n;
    cin >> n;
    n[1] = 'a';
    int x = n.length();
    n[x - 2] = 'a';
    cout << n;
    // 여기에 코드를 작성해주세요.
    return 0;
}