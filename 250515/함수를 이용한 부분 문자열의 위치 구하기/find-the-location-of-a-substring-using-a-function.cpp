#include <iostream>
using namespace std;

string m, n;

void f(){
    if(m.find(n) == string::npos) cout << -1;
    else cout << m.find(n);
}

int main() {
    cin >> m >> n;
    f();

}