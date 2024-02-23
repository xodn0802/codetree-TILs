#include <iostream>
#include <string>
using namespace std;




bool Samething(string a){
    int n = a.length();
    for(int i = 0; i < n; i++){
        if(a[i] != a[0]){
        
            return true;
        } 
    }
    return false;


}
int main() {
    string A;
    cin >> A;


    if(Samething(A)){
        cout << "Yes";
    }
    else {
        cout <<"No";
    }
    // if(cnt >= 2){
    //     cout << "Yes";
    // }
    // else {
    //     cout << "No";
    // }
    // 여기에 코드를 작성해주세요.
    return 0;
}