#include <bits/stdc++.h>

using namespace std;

int n, k;
int arr[100];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    int ans = 0;

    for(int i = 0; i <= n - k; i++){
        int tmp = 0;
        for(int j = i; j < i + k; j++){
            tmp += arr[j];
        }
        ans = max(ans, tmp);
    }
    cout << ans;

    return 0;
}