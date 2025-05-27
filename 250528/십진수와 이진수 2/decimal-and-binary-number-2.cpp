#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = stoi(s, nullptr, 2);
    n = n * 17;
    
    int arr[100] = {};

    int idx = 0;
    while(n > 0){
        arr[idx++] = n % 2;
        n = n / 2;
    }

    for(int i = idx - 1; i >= 0; i--){
        cout << arr[i];
    }

}