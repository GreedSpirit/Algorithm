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
            int tmp = 0;
            for(int k = j + 3; k < N - 2; k++){
                tmp = arr[i][k] + arr[i][k + 1] + arr[i][k + 2];
            }
            for(int a = i + 1; a < N; a++){
                for(int b = 0; b < N - 2; b++){
                    tmp = max(tmp , arr[a][b] + arr[a][b + 1] + arr[a][b + 2]);
                }
            }
            ans = max(sum + tmp , ans);
        }
    }
    cout << ans;

    return 0;
}