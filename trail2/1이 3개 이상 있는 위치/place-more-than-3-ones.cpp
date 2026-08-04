#include <iostream>

using namespace std;

int n;
int grid[100][100];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,-1,0,1};
int total = 0;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int cnt = 0;
            for(int dir = 0; dir < 4; dir++){
                int nx = i + dx[dir];
                int ny = j + dy[dir];
                if(nx >= n || nx < 0) continue;
                if(ny >= n || ny < 0) continue;
                if(grid[nx][ny] == 1) cnt++;
            }
            if(cnt >= 3) total++;
        }
    }
    cout << total;

    // Please write your code here.

    return 0;
}