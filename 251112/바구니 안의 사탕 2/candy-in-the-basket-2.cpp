#include <bits/stdc++.h>

using namespace std;

int N, K;
int candy[100], pos[100];
int arr[105];

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> candy[i] >> pos[i];
    }

    for (int i = 0; i < N; i++){
        arr[pos[i]] += candy[i];
    }

    int ans = 0;

    for (int i = 0; i < 100; i++){
        int start = i - K;
        int end = i + K;
        if(start <= 0) start = 0;
        if(end >= 100) end = 100;
        int sum = 0;
        for(int j = start; j <= end; j++){
            sum += arr[j];
        }
        ans = max(ans, sum);
    }

    cout << ans;

    return 0;
}