#include <iostream>
#include <string>
using namespace std;
int main() {
    string st_1, st_2;
    char output[300];
    getline(cin, st_1);
    getline(cin, st_2);

    int out_idx=0;
    
    for(int i = 0; i < st_1.length(); i++){
        if(st_1[i] == ' '){
            continue;
        }
        else{
            output[out_idx] = st_1[i];
            out_idx++;

        }
    }
    for(int i = 0; i < st_2.length(); i++){
        if(st_2[i] == ' '){
            continue;
        }
        else{
            output[out_idx] = st_2[i];
            out_idx++;
        }
    }
    output[out_idx] = 0x00;
    cout << output;

    // 여기에 코드를 작성해주세요.
    return 0;
}