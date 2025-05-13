#include <iostream>
using namespace std;

void div(int arr[], int n){
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            arr[i] = arr[i] / 2;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    div(arr, n);

    for(auto a : arr){
        cout << a << ' ';
    }



}