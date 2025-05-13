#include <iostream>
using namespace std;

int div(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    sum = sum / 10;
    return sum;
}

int main() {
    int n;
    cin >> n;

    cout << div(n);
}