#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int n, k;
string t;
string str[100];

int main() {
    cin >> n >> k >> t;
    vector<string> filterwords;

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    for(int i = 0; i < n; i++){
        if(str[i].find(t) == 0){
            filterwords.push_back(str[i]);
        }
    }

    sort(filterwords.begin(),filterwords.end());

    cout << filterwords[k - 1];

    // Write your code here!

    return 0;
}