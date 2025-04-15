#include <iostream>
using namespace std;

int arr[10];

int main() {
    int n;
    cin >> n;

    while(n--){
        int p;
        cin >> p;
        arr[p]++;
    }

    for(int i = 1; i <= 9; i++){
        cout << arr[i] << '\n';
    }
}