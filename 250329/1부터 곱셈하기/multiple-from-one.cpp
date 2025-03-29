#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int t = 1;

    for(int i = 1; i <= 10; i++){
        t *= i;
        if(t >= n){
            cout << i;
            break;
        }
    }
}