#include <iostream>
using namespace std;

int main() {
    int n, b;
    cin >> n >> b;
    
    int arr[10] = {};

    int idx = 0;
    while(n > 0){
        arr[idx++] = n % b;
        n = n / b;
    }

    for(int i = idx - 1; i >= 0; i--){
        cout << arr[i];
    }

}