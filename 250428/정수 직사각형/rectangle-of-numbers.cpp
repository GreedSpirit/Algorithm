#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    int cnt = 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr[i][j] = cnt++;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
}