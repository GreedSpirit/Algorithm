#include <iostream>
using namespace std;

int main() {
    int m, n;
    string s, t, r;
    cin >> s >> t >> r;

    int sl = s.length();
    int tl = t.length();
    int rl = r.length();

    m = 0;
    n = 30;

    m = max(m , max(sl, max(tl, rl)));
    n = min(n , min(sl, min(tl, rl)));

    cout << m - n;
}