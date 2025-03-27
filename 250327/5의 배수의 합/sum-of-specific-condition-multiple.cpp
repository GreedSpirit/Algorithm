#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int m, n;
    m = max(a, b);
    n = min(a, b);

    int total = 0;
    for(int i = n; i <= m; i++){
        if(i % 5 == 0) total += i;
    }
    cout << total;
}