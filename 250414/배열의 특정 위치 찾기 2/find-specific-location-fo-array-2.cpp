#include <iostream>
using namespace std;

int main() {
    int s1 = 0;
    int s2 = 0;
    int n;

    for(int i = 0; i < 10; i++){
        cin >> n;
        if(i % 2) s1 += n;
        else s2 += n;
    }

    cout << abs(s2 - s1);
}