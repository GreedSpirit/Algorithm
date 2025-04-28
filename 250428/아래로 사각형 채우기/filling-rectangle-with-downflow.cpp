#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n][n];

    int cnt = 1;

    for(int j = 0 ; j < n; j++){
        for(int i = 0; i < n; i++){
            arr[i][j] = cnt++;
        }
    }

    for(int j = 0 ; j < n; j++){
        for(int i = 0; i < n; i++){
            cout << arr[j][i] << ' ';
        }
        cout << '\n';
    }


}