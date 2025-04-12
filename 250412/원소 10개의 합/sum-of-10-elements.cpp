#include <iostream>
using namespace std;

int main() {
    int total = 0;

    for(int i = 0; i < 10; i++){
        int n;
        cin >> n;

        total += n;
    }
    cout << total;
}