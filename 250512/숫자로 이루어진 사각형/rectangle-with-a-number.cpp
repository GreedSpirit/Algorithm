#include <iostream>
using namespace std;

int a = 1;

void Print(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a++ << ' ';
            if(a == 10) a = 1;
        }
        cout << '\n';
    }
}

int main() {
    int n;
    cin >> n;
    Print(n);
}