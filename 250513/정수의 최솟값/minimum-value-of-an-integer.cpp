#include <iostream>
using namespace std;

int minval(int a, int b, int c){
    int ans = min(a, b);
    ans = min(ans, c);
    return ans;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << minval(a,b,c);
}