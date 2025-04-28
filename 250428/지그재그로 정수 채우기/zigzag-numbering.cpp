#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    int arr[n][m];

    for(int j = 0 ; j < m; j++){
        if(j % 2){
            for(int i = n - 1; i >= 0; i--){
                arr[i][j] = cnt++;
            }
        }
        else{
            for(int i = 0; i < n; i++){
                arr[i][j] = cnt++;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
}