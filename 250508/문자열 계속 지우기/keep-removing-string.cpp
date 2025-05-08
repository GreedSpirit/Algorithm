#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    while(a.find(b) != string::npos){
        int idx = a.find(b);
        a.erase(idx, b.length());
    }
    cout << a;
}