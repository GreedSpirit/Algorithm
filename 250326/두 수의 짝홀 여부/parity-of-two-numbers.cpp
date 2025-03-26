#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    string s;
    s = (a % 2) == 0 ? "even" : "odd";
    cout << s << '\n';
    string sb;
    sb = (b % 2) == 0 ? "even" : "odd";
    cout << sb;
}