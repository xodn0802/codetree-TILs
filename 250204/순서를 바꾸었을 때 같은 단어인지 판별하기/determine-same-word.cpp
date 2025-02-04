#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string word1;
string word2;

int main() {
    cin >> word1;
    cin >> word2;
    bool same = true;

    sort(word1.begin(),word1.end());
    sort(word2.begin(),word2.end());
    
    for(int i = 0; i < word1.length(); i++){
        if(word1[i] != word2[i]){
            same = false;
            break;
        }
    }

    if(same){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    // Write your code here!

    return 0;
}
