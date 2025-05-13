#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

bool digitSumEven(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum % 2 == 0;
}

int main() {
    int a, b;
    cin >> a >> b;

    int count = 0;
    for(int i = a; i <= b; i++) {
        if(isPrime(i) && digitSumEven(i)) {
            count++;
        }
    }

    cout << count << '\n';
    return 0;
}
