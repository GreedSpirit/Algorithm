#include <bits/stdc++.h>

using namespace std;

int N;
int arr[20][20];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) cin >> arr[i][j];

    int ans = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N - 2; j++){
            int sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
            ans = max(sum , ans);
        }
    }
    cout << ans;

    return 0;
}