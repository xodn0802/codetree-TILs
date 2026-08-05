#include <iostream>

using namespace std;

int n, t;
int r, c;
char d;
int arr[52][52] = {0};
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    cin >> n >> t;
    cin >> r >> c >> d;
    int x = c;
    int y = r;
    int dir;
    if(d == 'U'){
        dir = 3;
    }else if(d == 'D'){
        dir = 1;
    }else if(d == 'R'){
        dir = 0;
    }else{
        dir = 2;
    }

    for(int i = 0; i < t; i++){
        int nx = x + dx[dir];
        int ny = y + dy[dir];
    
        if(nx > n || nx < 1){
            dir = (dir + 2) % 4;
            continue;
        }
        if(ny > n || ny < 1){
            dir = (dir+2) % 4;
            continue;
        }
        x = nx;
        y = ny;
    }
    cout << y << " " << x;

    // Please write your code here.

    return 0;
}