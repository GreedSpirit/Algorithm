#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;

    int n;
    n = stoi(s, nullptr, a);
    
    int arr[100] = {};

    if(n == 0){
        cout << 0;
        return 0;
    }

    int idx = 0;
    while(n > 0){
        arr[idx++] = n % b;
        n = n / b;
    }

    for(int i = idx - 1; i >= 0; i--){
        cout << arr[i];
    }
}