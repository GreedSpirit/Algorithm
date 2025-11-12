#include <bits/stdc++.h>

using namespace std;

int N, H, T;
int arr[100];

int main() {
    cin >> N >> H >> T;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int ans = 9999999;

    for(int i = 0; i <= N - T; i++){
        int sum = 0;
        for(int j = i; j < i + T; j++){
            sum += abs(arr[j] - H);
        }
        ans = min(ans, sum);
        
    }
    cout << ans;

    return 0;
}