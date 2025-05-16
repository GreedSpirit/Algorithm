#include <iostream>

using namespace std;

int n;
int arr[100];

int f(int n){
    if(n == 0) return arr[0];

    return max(f(n - 1), arr[n]);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << f(n);

    // Please write your code here.

    return 0;
}