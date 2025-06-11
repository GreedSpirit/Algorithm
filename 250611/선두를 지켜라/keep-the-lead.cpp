#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> posA, posB;

    int apos = 0;
    for (int i = 0; i < n; i++) {
        int v, t;
        cin >> v >> t;
        while (t--) {
            apos += v;
            posA.push_back(apos);
        }
    }

    int bpos = 0;
    for (int i = 0; i < m; i++) {
        int v, t;
        cin >> v >> t;
        while (t--) {
            bpos += v;
            posB.push_back(bpos);
        }
    }

    int change = 0;
    int prev = 0; // 0: 같음, 1: A 선두, 2: B 선두

    for (int t = 0; t < posA.size(); t++) {
        int now = 0;
        if (posA[t] > posB[t]) now = 1;
        else if (posA[t] < posB[t]) now = 2;

        if ((prev == 1 && now == 2) || (prev == 2 && now == 1)) {
            change++;
        }

        if (now != 0) prev = now; // 동점일 때는 prev 유지
    }

    cout << change << '\n';
    return 0;
}
