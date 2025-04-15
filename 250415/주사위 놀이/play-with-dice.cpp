#include <iostream>
using namespace std;

int arr[6];

int main() {

    for(int i = 0; i < 10; i++){
        int n;
        cin >> n;
        arr[n - 1]++;
    }

    for(int i = 0; i < 6; i++){
        cout << i + 1 << " - " << arr[i] << '\n'; 
    }
}