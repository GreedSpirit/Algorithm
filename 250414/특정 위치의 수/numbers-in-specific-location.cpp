#include <iostream>
using namespace std;

int main() {
    int total = 0;

    for(int i = 0; i < 10; i++){
        int n;
        cin >> n;
        
        if(i == 2 || i == 4 || i == 9) total += n;
    }
    cout << total;
}