#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if(i % 3 == 0){
            cout << "0 ";
        }
        //3, 6, 9를 포함하는 수는 10으로 나누었을 때 몫이나 나머지가 3,6,9가 나온다고 함.
        else if(i % 10 == 3 || i % 10 == 6 || i % 10 == 9){
            cout << "0 ";
        }
        else if(i / 10 == 3 || i / 10 == 6 || i / 10 == 9) {
            cout << "0 ";
        }
        else{
            cout << i << " ";
        } 
    
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}