#include <iostream>
using namespace std;

bool Year(int Y){
    if(Y % 4 == 0){
        if(Y % 100 == 0){
            if(Y % 400 == 0){
                return true;
            }
            return false;
        }
        return true;
    }
    else{
        return false;
    }
}
bool IsTure(int Y, int M, int D){
    if(Year(Y)){
        if(M > 12 ||  D > 31){
            return false;
        }
        else if(M == 4 || M == 6 || M == 9 || M == 11 && D > 30){
            return false;
        }
        else if(M == 2 && D > 29){
            return false;
        }
    return true;
    }
    else{
        if(M > 12 ||  D > 31){
            return false;
        }
        else if(M == 4 || M == 6 || M == 9 || M == 11 && D > 30){
            return false;
        }
        else if(M == 2 && D > 28){
            return false;
        }
    return true;        
    }

}
int main() {
    int Y, M, D;
    cin >> Y >> M >> D;

    if(IsTure(Y, M, D)){
        if(M == 3 || M  == 4 || M == 5){
            cout << "Spring";
        }
        else if(M == 6 || M == 7 || M == 8){
            cout << "Summer";
        }
        else if(M == 9 || M == 10 || M == 11){
            cout << "Fall";
        }
        else {
            cout << "Winter";
        }
    }
    else
        cout << "-1";
    // 여기에 코드를 작성해주세요.
    return 0;
}