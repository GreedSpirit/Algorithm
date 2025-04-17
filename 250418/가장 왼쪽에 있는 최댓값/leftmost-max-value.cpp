#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int right = n - 1;

    while (right >= 0) {
        int max_val = a[0];
        int idx = 0;

        for (int i = 1; i <= right; i++) {
            if (a[i] > max_val) {
                max_val = a[i];
                idx = i;
            }
        }

        cout << idx + 1 << " ";
        right = idx - 1;
    }

    return 0;
}