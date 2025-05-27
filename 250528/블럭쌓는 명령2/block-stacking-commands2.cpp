#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n] = {};

    while(k--){
        int a, b;
        cin >> a >> b;

        for(int i = a - 1; i < b; i++){
            arr[i]++;
        }
    }

    int ans = 0;

    for(auto a : arr){
        ans = max(ans, a);
    }
    cout << ans;
}