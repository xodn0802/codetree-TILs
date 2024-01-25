#include <iostream>
using namespace std;

int main() {
    int s, a;
    cin >> s >> a;

    if (s == 0) {
        if (a >= 19){
            cout << "MAN";
        }

        else {
            cout << "BOY";
        }
    }
    else {
        if (a >=19){

            cout << "WOMAN";
        }
        else {
            cout << "GIRL";
        }
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}