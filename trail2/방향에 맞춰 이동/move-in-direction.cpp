#include <iostream>

using namespace std;

int n;
char dir[100];
int dist[100];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,-1,0,1};


int main() {
    cin >> n;
    int x = 0;
    int y = 0;

    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> dist[i];
        if(dir[i] == 'E'){
            x += dist[i];
        }else if(dir[i] == 'S'){
            y -= dist[i];
        }else if(dir[i] == 'W'){
            x -= dist[i];
        }else{
            y += dist[i];
        }
    }

    cout << x << " " << y;

    // Please write your code here.

    return 0;
}