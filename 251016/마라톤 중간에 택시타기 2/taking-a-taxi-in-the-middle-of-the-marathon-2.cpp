#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int,int>> v;

    for(int i = 0; i < N; i++){
        int x, y;
        cin >> x >> y;
        v.push_back({x,y});
    }

    int ans = INT_MAX;

    for(int i = 1; i < N - 1; i++){
        int sum = 0;
        int ex = v[0].first;
        int ey = v[0].second;

        for(int j = 0; j < N; j++){
            if(j == i) continue;
            int nx = v[j].first;
            int ny = v[j].second;

            sum += abs(nx - ex) + abs(ny - ey);

            ex = nx;
            ey = ny;
        }
        ans = min(ans, sum);
    }
    cout << ans;
}