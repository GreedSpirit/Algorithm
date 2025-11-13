#include <iostream>

using namespace std;

int N;
int a, b, c;

int outn(int n){
    if(n == 1){
        return 3;
    }
    else if(n == 2){
        return 4;
    }
    else if(n == N){
        return 3;
    }
    else if(n == N - 1){
        return 4;
    }
    else {
        return 5;
    }
}

int main() {
    cin >> N;
    cin >> a >> b >> c;

    int ans = N * N * N;

    ans = ans - ((N - outn(a)) * (N - outn(b)) * (N - outn(c)));
    cout << ans;

    // Please write your code here.

    return 0;
}