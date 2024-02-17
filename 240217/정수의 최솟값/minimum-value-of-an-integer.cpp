#include <iostream>
using namespace std;
int min(int a, int b, int c){
    if(a <= b && a <= c){
        return a;
    }
    else if(b <= a && b <= c){
        return b;
    }
    else if(c <= a && c <= b){
        return c;
    }
}
int main() {
    int x, y, z;
    cin >> x >> y >> z;
    cout << min(x, y, z);
    // 여기에 코드를 작성해주세요.
    return 0;
}