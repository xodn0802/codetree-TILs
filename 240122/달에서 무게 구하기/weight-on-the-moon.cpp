#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    
    int g = 13;
    double m = 0.165000;
    double c = g * m;
    
    cout.precision(6);

    cout << g << " * " << m << " = " << c;

    //cout.precision(4);
    //cout << a;    // 여기에 코드를 작성해주세요.
    return 0;
}