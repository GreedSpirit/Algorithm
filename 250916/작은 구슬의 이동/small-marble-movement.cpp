#include <bits/stdc++.h>
using namespace std;

int Dir(char c){
    switch(c){
        case 'U':
        return 3;
        case 'D':
        return 0;
        case 'R':
        return 1;
        default:
        return 2;
    }
}

int main() {
    int dx[4] = {1, 0, 0, -1};
    int dy[4] = {0, 1, -1, 0};

    int N, T;

    cin >> N >> T;


    int R, C;
    char D;
    cin >> R >> C >> D;

    int dir = Dir(D);

    while(T > 0){
        if(dir == 2 || dir == 1){
            if(C + dy[dir] == 0 || C + dy[dir] == N + 1){
                T--;
                dir = abs(dir - 3);
                if(T == 0){
                    break;
                }
            }
            C += dy[dir];
            T--;
        }
        else{
            if(R + dx[dir] == 0 || R + dx[dir] == N + 1){
                T--;
                dir = abs(dir - 3);
                if(T == 0){
                    break;
                }
            }
            R += dx[dir];
            T--;
        }
    }

    cout << R << ' ' << C;
}