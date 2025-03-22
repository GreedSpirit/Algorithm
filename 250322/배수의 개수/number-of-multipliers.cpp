#include <iostream>
using namespace std;

int main() {
    int tn = 0;
    int fn = 0;

    int n;
    for(int i = 0; i < 10; i++){
        cin >> n;
        if(n % 3 == 0) tn++;
        if(n % 5 == 0) fn++;
    }
    cout << tn << ' ' << fn;
}