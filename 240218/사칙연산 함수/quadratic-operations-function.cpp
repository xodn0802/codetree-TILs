#include <iostream>
using namespace std;
int Plus(int a, int b){
    return a + b;
}
int minu(int a, int b){
    return a - b;
}
int multi(int a, int b){
    return a * b;
}
int divi(int a, int b){
    return a / b;
}
int main() {
    int a, b;
    char o;
    cin >> a >> o >> b;
    if(o == '+'){
        cout << a << " + " << b << " = " << Plus(a, b);
    }
    else if(o == '-'){
        cout << a << " - " << b << " = " << minu(a, b);
    }
    else if(o == '*'){
        cout << a << " * " << b << " = " << multi(a, b);
    }
    else if(o == '/'){
        cout << a << " / " << b << " = " << divi(a, b);
    }
    else {
        cout << "False";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}