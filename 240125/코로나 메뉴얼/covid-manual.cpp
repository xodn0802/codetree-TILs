#include <iostream>
using namespace std;

int main() {
    int a, b, c, count;
    char cold_a, cold_b, cold_c;
    cin >> cold_a >> a;
    cin >> cold_b >> b;
    cin >> cold_c >> c;

    count = 0;

    if (cold_a == 'Y' && a >= 37){
        count += 1;

    }
    if (cold_b == 'Y' && b >= 37 ){
        count += 1;
    }
    if (cold_c == 'Y' && c >= 37) {
        count += 1;
    }

    if (count >= 2) {
        cout << "E";
    }
    else {
        cout << "N";
    }



        // 여기에 코드를 작성해주세요.
    return 0;
}