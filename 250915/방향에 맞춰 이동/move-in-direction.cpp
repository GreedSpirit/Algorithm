#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, -1, 0, 1};

    int x = 0, y = 0;
    int Nt;
    cin >> Nt;

    for (int i = 0; i < Nt; i++) {
        char c;
        int n;
        cin >> c >> n;

        int d; // enum 변수 선언
        if (c == 'W') d = 0;
        else if (c == 'S') d = 1;
        else if (c == 'E') d = 2;
        else if (c == 'N') d = 3;

        x += n * dx[d];
        y += n * dy[d];
    }

    cout << x << ' ' << y;
}
