#include <iostream>
using namespace std;

int main() {
    int m, n;
    m = 0;
    n = 1000;

    for(int i = 0; i < 10; i++){
        int k;
        cin >> k;

        if(k < 500){
            m = max(m , k);
        }
        else{
            n = min(n, k);
        }
    }

    cout << m << ' ' << n;
}