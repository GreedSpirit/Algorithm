#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n] = {};

    int m, k;
    cin >> m >> k;

    while(m--){
        int x;
        cin >> x;
        arr[x - 1]++;
        if(arr[x - 1] >= k){
            cout << x;
            return 0;
        }
    }

    cout << -1;
}