#include <bits/stdc++.h>

using namespace std;

int a[6];

int main() {
    for (int i = 0; i < 6; i++) {
        cin >> a[i];
    }

    int sum = 0;

    for(int i : a){
        sum += i;
    }

    int ans = 3000000;
    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 5; j++){
            for(int k = j + 1; k < 6; k++){
                int tmp = a[i] + a[j] + a[k];
                ans = min(ans, abs(abs(sum - tmp) - tmp));
            }
        }
    }
    cout << ans;

    return 0;
}