#include <bits/stdc++.h>
using namespace std;

int N, M;
int A[100], B[100];
int arr[100];

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < M; i++) cin >> B[i];
    sort(B, B + M);
    int ans = 0;

    for(int i = 0; i <= N - M; i++){
        for(int j = 0; j < M; j++){
            arr[j] = A[j + i];
        }
        sort(arr, arr + M);

        for(int j = 0; j < M; j++){
            if(arr[j] != B[j]){
                ans--;
                break;
            }
        }
        ans++;
    }
    cout << ans;

    return 0;
}