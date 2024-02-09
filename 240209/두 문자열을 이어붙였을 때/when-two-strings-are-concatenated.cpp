#include <iostream>
#include <string>
using namespace std;
int main() {
    string a;
    string b;
    cin >> a >> b;

    string sum_1;
    string sum_2;

    sum_1 += a;
    sum_1 += b;

    sum_2 += b;
    sum_2 += a;

    if(sum_1 == sum_2){
        cout << "true";
    }
    else {
        cout << "false";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}