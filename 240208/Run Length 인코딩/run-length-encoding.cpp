#include <iostream>
#include <string>
using namespace std;
int main() {
    //97 ~ 122
    string arr;
    cin >> arr;

    string st = "";

    char curr_char = arr[0];
    int num_char = 1;
    for(int i = 1; i < arr.length(); i++){
        if(arr[i] == curr_char){
            num_char++;
        }
        else {
            st += curr_char;
            st += to_string(num_char);

            curr_char = arr[i];
            num_char = 1;
        }
    }

    st += curr_char;
    st += to_string(num_char);

    cout << (int) st.length() << endl << st;
    
    

    // 여기에 코드를 작성해주세요.
    return 0;
}