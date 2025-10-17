#include <bits/stdc++.h>

using namespace std;

int n;
int numbers[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int ans = INT_MIN;
    
    for(int i = 0; i < n; i++){
        for(int j = i + 2; j < n; j++){
            int sum = 0;
            sum += numbers[i] + numbers[j];
            ans = max(ans, sum);
        }
    }
    cout << ans;
    return 0;
}