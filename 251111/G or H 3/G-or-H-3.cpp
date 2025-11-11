#include <bits/stdc++.h>

using namespace std;

int N, K;
int x[100];
char c[100];
int arr[10005];

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> c[i];
    }

    for(int i = 0; i < N; i++){
        arr[x[i]] = c[i] == 'G' ? 1 : 2;
    }

    int ans = 0;
    for(int i = 0; i < 10001 - K; i++){
        int tmp = 0;
        for(int j = i; j <= i + K; j++){
            tmp += arr[j];
        }
        ans = max(ans, tmp);
    }
    cout << ans;

    // Please write your code here.

    return 0;
}