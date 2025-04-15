#include <iostream>
using namespace std;

int arr[11];

int main() {
    while(true){
        int n;
        cin >> n;

        if(n == 0) break;

        arr[(n / 10) % 10]++;
        if(n == 100) arr[10]++;
    }

    for(int i = 10; i > 0; i--){
        cout << i * 10 << " - " << arr[i] << '\n';
    }
}