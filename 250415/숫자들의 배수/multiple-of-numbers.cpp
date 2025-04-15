#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int c = 1;
    int cnt = 0;
    while(true){
        cout << n * c << ' ';
        if((n * c++) % 5 == 0) cnt++;
        if(cnt == 2) break;

    }   
}