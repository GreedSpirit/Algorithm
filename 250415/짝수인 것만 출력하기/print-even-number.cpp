#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--){
        int p;
        cin >> p;

        if(p % 2 == 0) cout << p << ' ';
    }
}