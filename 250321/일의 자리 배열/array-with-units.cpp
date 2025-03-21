#include <iostream>
using namespace std;

int main() {
    int arr[12];

    for(int i = 0; i < 2; i++){
        cin >> arr[i];
        cout << arr[i] << ' ';
    }

    for(int i = 2; i < 10; i++){
        arr[i] = arr[i - 2] + arr[i - 1];
        cout << arr[i] % 10 << ' ';
    }
}