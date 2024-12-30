#include <iostream>
using namespace std;

void printStar(int n){
    if(n == 0){
        return;
    }
    printStar(n-1);
    cout << "HelloWorld" << endl;

}
int main() {
    int cnt;
    cin >> cnt;
    printStar(cnt);

    // 여기에 코드를 작성해주세요.
    return 0;
}