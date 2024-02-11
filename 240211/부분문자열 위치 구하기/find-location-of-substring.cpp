#include <iostream>
#include <string>
using namespace std;
int main() {
    string m, n;
    cin >> m >> n;

    int len_m = m.length();
    int len_n = n.length();
    int index = -1;

    for(int i = 0; i < len_m - len_n + 1; i++){
        int cnt = 0;
        for(int j = 0; j < len_n; j++){
            if(m[i + j] == n[j]){
                cnt++;

            }
        
        }
        if(cnt == len_n){
            index = i;
            break;
        }

    }
    cout << index;

    // 여기에 코드를 작성해주세요.
    return 0;
}



// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

// 	//  i       01234567891011
// 	string s = "appleabanana";
// 	string t = "abbaba";

// 	int n = s.length();
// 	bool exists = false;

// 	int len_t = t.length();

// 	for (int i = 0; i < n - len_t + 1; i++) {
// 		bool all_same = true;
// 		for (int j = 0; j < len_t; j++) {
// 			if (s[i + j] != t[j]) {
// 				all_same = false;
// 			}
// 		}

// 		// if s[i] == t[0] and s[i + 1] == t[1] and ....
// 		//   s[i + len_t - 1] == t[len_t - 1]:
// 		if (all_same == true) {
// 			exists = true;
// 		}
// 	}

// 	if (exists == true) cout << "true";
// 	else cout << "false";

// 	return 0;

// }

// >> false