#include <iostream>
using namespace std;

int main() {
    int b = -999;
    int s = 999;

    while(true){
        int n;
        cin >> n;
        if(n == 999 || n == -999) break;
        b = max(b, n);
        s = min(s, n);
    }
    cout << b << ' ' << s;
}