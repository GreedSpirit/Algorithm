#include <iostream>
using namespace std;

int main() {
    int arr[10][10];
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            for(int j = 0; j < n; j++){
                arr[j][i] = j + 1;
            }
        }
        else{
            for(int j = 0; j < n; j++){
                arr[j][i] = n - j;
            }
        }
    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j];
        }
        cout << '\n';
    }
}