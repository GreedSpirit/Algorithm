#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int arr[N] = {};
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    int ans = 0;

    for(int i = 0; i < N - 2; i++){
        for(int j = i + 1; j < N - 1; j++){
            if(arr[i] <= arr[j]){
                for(int k = j + 1; k < N; k++){
                    if(arr[j] <= arr[k]) ans++;
                }
            }
        }
    }

    cout << ans;
}