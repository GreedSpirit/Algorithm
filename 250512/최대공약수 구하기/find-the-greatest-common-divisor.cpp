#include <iostream>
using namespace std;

void Greatest(int n, int m){
    int k = 0;
    for(int i = 1; i <= max(n, m); i++){
        if(n % i == 0 && m % i == 0){
            k = max(k, i);
        }
    }
    cout << k;
}

int main() {
    int n, m;
    cin >> n >> m;
    Greatest(n, m);
}