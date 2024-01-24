#include <iostream>
#include <string>
using namespace std;
int main() {
    int a;
    string b;

    cin >> a;

    b = 100 - a > 0 ? "failure" : "pass";

    cout << b;
    // 여기에 코드를 작성해주세요.
    //해설

    //int score;

    //cin >> score;

    //cout << ((score == 100) ? "pass" : "failure");
    return 0;
}