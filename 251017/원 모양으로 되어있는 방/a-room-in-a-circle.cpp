#include <bits/stdc++.h>
using namespace std;

int N;
int a[1003];

int main() {
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int ans = INT_MAX;

    for(int i = 0; i < N; i++){
        int sum = 0;
        int multi = 0;
        for(int j = i; j < N + i; j++){
            int k = j % N;
            sum += a[k] * multi++;
        }
        ans = min(ans, sum);
    }
    cout << ans;

    return 0;
}