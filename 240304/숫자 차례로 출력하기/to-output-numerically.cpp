#include <iostream>
using namespace std;
void Funtion_1(int n){
    if(n == 0){
        return;
    }
    Funtion_1(n - 1);
    cout << n << " ";
}

void Funtion_2(int n){
    if(n == 0)
        return;
    
    cout << n << " ";
    Funtion_2(n - 1);
}
int main() {
    int n;
    cin >> n;
    Funtion_1(n);
    cout << endl;
    Funtion_2(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}