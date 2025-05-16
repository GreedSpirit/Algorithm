#include <iostream>

using namespace std;

int N;
int cnt;

int f(int n){
    if(n == 1) return cnt++;
    cnt++;
    if(n % 2){
        return f(n / 3);
    }
    else{
        return f(n / 2);
    }
}

int main() {
    cin >> N;
    cout << f(N);

    // Please write your code here.

    return 0;
}