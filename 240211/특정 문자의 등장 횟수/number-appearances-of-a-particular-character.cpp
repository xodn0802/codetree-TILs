#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int length = s.length();
    int count_e = 0;
    int count_b = 0;

    for(int i = 0; i < length - 1; i++){
        if(s.substr(i,2) == "ee"){
            count_e++;
        }
        else if(s.substr(i,2) == "eb"){
            count_b++;
        }

    }
    cout << count_e << " " << count_b;
    
    // 여기에 코드를 작성해주세요.
    return 0;
}