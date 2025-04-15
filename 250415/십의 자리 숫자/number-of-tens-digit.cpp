#include <iostream>
using namespace std;

int arr[10];

int main() {
    while(true){
        int n;
        cin >> n;

        if(n == 0) break;

        arr[(n / 10) % 10]++;
    }

    for(int i = 1; i < 10; i++){
        cout << i << " - " << arr[i] << '\n';
    }
}