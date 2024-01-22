#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    double a = 5.26;    // 여기에 코드를 작성해주세요.
    double b = 8.27;
    //double c =a*b;
    cout.precision(3);

    cout << a*b;

    return 0;
}