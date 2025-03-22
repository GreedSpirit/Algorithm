#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    for(int i = A; i <= B; i){
        cout << i << ' ';
        if(i % 2 == 1) i *= 2;
        else i += 3;
    }
}