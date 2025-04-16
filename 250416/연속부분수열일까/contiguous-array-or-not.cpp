#include <iostream>
#include <vector>
using namespace std;

bool is_subsequence(const vector<int>& a, const vector<int>& b) {
    int n = a.size();
    int m = b.size();

    if (m > n) return false;

    for (int i = 0; i <= n - m; i++) {
        bool match = true;
        for (int j = 0; j < m; j++) {
            if (a[i + j] != b[j]) {
                match = false;
                break;
            }
        }
        if (match) return true;
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n), b(m);
    
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    if (is_subsequence(a, b)) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}