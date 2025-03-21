#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    vector<int> v(3);
    v[0] = A;
    v[1] = B;
    v[2] = C;

    sort(v.begin(), v.end());
    cout << v[1];
}