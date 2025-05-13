#include <iostream>
#include <vector>
using namespace std;

bool isSubsequence(const vector<int>& a, const vector<int>& b) {
    int n1 = a.size(), n2 = b.size();
    if (n2 > n1) return false;

    for (int i = 0; i <= n1 - n2; i++) {
        bool match = true;
        for (int j = 0; j < n2; j++) {
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
    int n1, n2;
    cin >> n1 >> n2;

    vector<int> a(n1), b(n2);
    for (int i = 0; i < n1; i++) cin >> a[i];
    for (int i = 0; i < n2; i++) cin >> b[i];

    if (isSubsequence(a, b)) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}
