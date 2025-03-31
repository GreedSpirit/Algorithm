#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int c;
    cin >> c;

    for(int i = a; i <= b; i++){
        if(i % c == 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}