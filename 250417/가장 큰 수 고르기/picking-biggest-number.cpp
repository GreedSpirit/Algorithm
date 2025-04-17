#include <iostream>
using namespace std;

int main() {
    int tmp = 0;

    for(int i = 0; i < 10; i++){
        int j;
        cin >> j;
        tmp = max(tmp, j);
    }
    cout << tmp;
}