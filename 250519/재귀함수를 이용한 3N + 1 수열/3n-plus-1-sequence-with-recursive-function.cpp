#include <iostream>
using namespace std;

int cnt;

int f(int n){
    if(n == 1) return 0;

    if(n % 2) return f(n * 3 + 1) + 1;
    else return f(n / 2) + 1;

}

int main() {
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}