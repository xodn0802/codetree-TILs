#include <iostream>
#include <string>
using namespace std;
int main() {
    string A, B;
    cin >> A >> B;

    int n = A.length();
    int len_b = B.length();

    while(true) {
        int idx = -1;

        int candidates = n - len_b + 1;
        for(int i = 0; i < candidates; i++){
            bool is_same = true;
            for(int j = 0; j < len_b; j++){
                if(A[i + j] != B[j]){
                    is_same = false;
                    break;
                }
            }
            if(is_same) {
                idx = i;
                break;
            }
        }
        //찾지 못한 경우
        if(idx == -1)
            break;

        A = A.substr(0, idx) + A.substr(idx + len_b);

        n = A.length();
    }




    cout << A;

    
    
    // 여기에 코드를 작성해주세요.
    return 0;
}






	// string s = "appleabanana";
	// string t = "abbaba";

	// int n = s.length();
	// bool exists = false;

	// int len_t = t.length();

	// for (int i = 0; i < n - len_t + 1; i++) {
	// 	bool all_same = true;
	// 	for (int j = 0; j < len_t; j++) {
	// 		if (s[i + j] != t[j]) {
	// 			all_same = false;
	// 		}
	// 	}

	// 	// if s[i] == t[0] and s[i + 1] == t[1] and ....
	// 	//   s[i + len_t - 1] == t[len_t - 1]:
	// 	if (all_same == true) {
	// 		exists = true;
	// 	}
	// }

	// if (exists == true) cout << "true";
	// else cout << "false";

	// return 0;