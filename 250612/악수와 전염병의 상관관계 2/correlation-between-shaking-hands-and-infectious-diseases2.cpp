#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, P, T;
    cin >> N >> K >> P >> T;

    vector<tuple<int, int, int>> handshakes(T);
    for (int i = 0; i < T; i++) {
        int t, x, y;
        cin >> t >> x >> y;
        handshakes[i] = {t, x, y};
    }

    sort(handshakes.begin(), handshakes.end());

    vector<int> infected(N + 1, 0);
    vector<int> remaining(N + 1, K);

    infected[P] = 1;

    for (auto [t, x, y] : handshakes) {
        bool x_inf = infected[x];
        bool y_inf = infected[y];

        if (x_inf && remaining[x] > 0) {
            if (!infected[y]) infected[y] = 1;
            remaining[x]--;
        }
        if (y_inf && remaining[y] > 0) {
            if (!infected[x]) infected[x] = 1;
            remaining[y]--;
        }
    }

    for (int i = 1; i <= N; i++) {
        cout << infected[i];
    }
    cout << '\n';
}
