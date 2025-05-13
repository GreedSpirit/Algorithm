#include <iostream>
using namespace std;

int multi(int a, int b){
    int ans = a;
    for(int i = 1; i < b; i++){
        ans *= a;
    }
    return ans;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << multi(a, b);
}