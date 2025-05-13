#include <iostream>
using namespace std;




int main() {
    int a, c;
    char o;
    cin >> a >> o >> c;
    int ans;

    if(o == '+') ans = a + c;
    else if(o == '-') ans = a - c;
    else if(o == '/') ans = a / c;
    else if(o == '*') ans = a * c;    
    else{
        cout << "False";
        return 0;
    }
    cout << a << ' ' << o << ' ' << c << ' ' << '=' << ' ' << ans;
}