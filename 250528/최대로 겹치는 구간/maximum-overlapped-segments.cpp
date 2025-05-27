#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    const int offset = 100;

    int arr[300] = {};

    while(n--){
        int x1, x2;
        cin >> x1 >> x2;
        for(int i = x1 + offset; i < x2 + offset; i++){
            arr[i]++;
        }
    }

    int ans = 0;

    for(auto a : arr){
        ans = max(ans, a);
    }
    cout << ans;
}