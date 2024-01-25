#include <iostream>
using namespace std;

int main() {
    int y;
    
    if (y % 4 == 0){
        if (y % 100 == 0){

            if (y % 400 == 0){
                cout << "true";

                return 0;
            }
            else {
                cout << "false";

                return 0;
            }

        }
    }
        // 여기에 코드를 작성해주세요.
    return 0;
}