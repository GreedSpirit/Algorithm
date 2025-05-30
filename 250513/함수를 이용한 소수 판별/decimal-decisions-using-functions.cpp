#include <iostream>
using namespace std;

bool Prime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;

    int ans = 0;

    for(int i = a; i <= b; i++){
        if(Prime(i)){
            ans += i;
        }
    }

    cout << ans;
}