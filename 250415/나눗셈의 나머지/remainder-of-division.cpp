#include <iostream>
using namespace std;

int arr[11];

int main() {
    int a, b;
    cin >> a >> b;

    while(a > 1){
        arr[a % b]++;
        a = a / b;
    }

    int ans = 0;

    for(int i = 0; i < 11; i++){
        ans += (arr[i] * arr[i]);
    }
    cout << ans;
}