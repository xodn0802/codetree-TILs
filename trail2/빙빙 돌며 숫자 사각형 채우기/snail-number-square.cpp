#include <iostream>

using namespace std;

int n, m;
int arr[100][100] = {};
int arr2[100][100] = {};
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int dir = 0;
int cnt = 1;

int main() {
    cin >> n >> m;
    int x = 0;
    int y = 0;
    int dir = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr[x][y] = cnt;
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if(nx < 0 || nx >= n || arr[nx][ny] != 0){
                dir = (dir+1)%4;
                nx = x + dx[dir];
                ny = y + dy[dir];
            }
            if(ny < 0 || ny >= m || arr[nx][ny] != 0){
                dir = (dir+1) % 4;
                nx = x + dx[dir];
                ny = y + dy[dir];
            }
            x = nx;
            y = ny;
            cnt++;
            
        }
        
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }

    // Please write your code here.

    return 0;
}