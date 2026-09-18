#include <iostream>
#include <string>

using namespace std;

int n, m;
string s;

int main() {
    cin >> n >> m;
    cin >> s;
    auto it = s.end();

    for (int i = 0; i < m; i++) {
        char command;
        cin >> command;
        if (command == 'P') {
            char c;
            cin >> c;
            it = s.insert(it,c);
            ++it;
        }else if(command == 'L'){
            if(it == s.begin()) continue;
            it--;
        }else if(command == 'R'){
            if(it == s.end()) continue;
            it++;
        }else if(command == 'D'){
            if(it == s.end()) continue;
            it = s.erase(it);
        }
    }
    cout << s;

    // Please write your code here.

    return 0;
}
