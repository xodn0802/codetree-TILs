#include <iostream>
using namespace std;

bool Mon(int m, int n) {
    if(m > 12 ||  n > 31){
        return false;
    }
    else if(m == 4 || m == 6 || m == 9 || m == 11 && n > 30){
        return false;
    }
    else if(m == 2 && n > 28){
        return false;
    }
    return true;

}

int main() {
    int m, d;
    cin >> m >> d;

    if(Mon(m, d)){
        cout  << "Yes";
    }
    else{
        cout << "No";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}