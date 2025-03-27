#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int total = 0;
    int i;
    while(n--){
        cin >> i;

        if(i % 2 && i % 3 == 0) total += i;
    }
    cout << total;
}