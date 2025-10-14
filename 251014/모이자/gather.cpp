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

    int ans = INT_MAX;

    for(int i = 0; i < N; i++){
        int sum = 0;
        for(int j = 0; j < N; j++){
            sum += abs(i - j) * arr[j];
        }
        ans = min(sum, ans);
    }

    cout << ans;

}