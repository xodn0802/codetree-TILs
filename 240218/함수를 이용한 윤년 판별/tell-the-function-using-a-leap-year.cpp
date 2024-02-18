#include <iostream>
using namespace std;
bool moon(int n) {
    if(n % 4 == 0){
        if(n % 100 == 0){
            if(n % 400 == 0){
                return true;
            }
            return false;
        }
        return true;
    }
    else 
        return false;
}
int main() {
    int y;
    cin >> y;

    if(moon(y)){
        cout << "true";
    }
    else {
        cout << "false";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}