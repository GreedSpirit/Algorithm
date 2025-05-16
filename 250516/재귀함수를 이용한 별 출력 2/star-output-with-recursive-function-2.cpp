#include <iostream>

using namespace std;

int n;

void PrintStart(int n){
    if(n == 0) return;
    for(int i = 0; i < n; i++){
        cout << "*" << ' ';
    }
    cout << '\n';
    PrintStart(n - 1);
    for(int i = 0; i < n; i++){
        cout << "*" << ' ';
    }
    cout << '\n';
}

int main() {
    cin >> n;

    PrintStart(n);

    // Please write your code here.

    return 0;
}