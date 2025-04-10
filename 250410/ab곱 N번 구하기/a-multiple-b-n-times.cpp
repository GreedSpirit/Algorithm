#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--){
        int a, b;
        cin >> a >> b;

        int total = 1;
        for(int i = a; i <= b; i++){
            total *= i;
        }
        cout << total << '\n';
    }
}