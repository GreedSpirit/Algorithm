#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n];

    int count = 1;

    for(int j = n - 1; j >= 0; j--){
        if((n - j) % 2){
            for(int i = n - 1; i >= 0; i--){
                arr[i][j] = count++;
            }
        }
        else{
            for(int i = 0; i < n; i++){
                arr[i][j] = count++;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
}