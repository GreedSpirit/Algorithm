#include <iostream>
using namespace std;

int main() {
    int arr[4][4];
    int total = 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j <= i; j++){
            total += arr[i][j];
        }
    }
    cout << total;
}