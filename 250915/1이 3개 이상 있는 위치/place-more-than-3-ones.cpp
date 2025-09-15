#include <bits/stdc++.h>
using namespace std;

int N; 

bool InRange(int x, int y){
        return x >= 0 && x < N && y >= 0 && y < N;
    }

int main() {
    cin >> N;

    vector<vector<int>> v(N, vector<int>(N, 0));

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> v[i][j];
        }
    }

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int ans = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            int cnt = 0;

            for(int k = 0; k < 4; k++){
                int curX = i + dx[k];
                int curY = j + dy[k];
                
                if(InRange(curX, curY) && v[curX][curY]){
                    cnt++;
                }
            }
            if(cnt >= 3) ans++;
        }
    }
    cout << ans;

}