#include <iostream>
using namespace std;

int main() {
    
    cout << fixed;
    double f = 30.48;
    double m = 160934;
    
    double cf = f * 9.2;
    double cm = m * 1.3;

    cout.precision(1);

    cout << "9.2ft = " << cf << "cm" << endl << "1.3mi = " << cm << "cm"; 
    
    //cout << cf;    // 여기에 코드를 작성해주세요.
    return 0;
}