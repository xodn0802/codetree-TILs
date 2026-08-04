#include <iostream>

using namespace std;

string dirs;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int dir = 0;

int main() {
    cin >> dirs;
    int x = 0;
    int y = 0;
    for(int i = 0; i < dirs.size(); i++){
        if(dirs[i] == 'R'){
            dir = (dir+1) % 4;
            
        }else if(dirs[i] == 'F'){
            x += dx[dir];
            y += dy[dir];
            
        }else if(dirs[i] == 'L'){
            dir = (dir + 3) % 4;
            
        }
    }
    cout << x << " " << y;

    // Please write your code here.

    return 0;
}