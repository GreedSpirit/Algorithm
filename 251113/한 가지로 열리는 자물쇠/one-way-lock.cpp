#include <iostream>
#include <cmath> 

using namespace std;

int N;
int a, b, c;

bool is_close(int n1, int n2) {
    return abs(n1 - n2) <= 2;
}

int main() {
    cin >> N;
    cin >> a >> b >> c;

    int ans = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            for (int k = 1; k <= N; k++) {
                
                if (is_close(i, a) || is_close(j, b) || is_close(k, c)) {
                    ans++; 
                }
            }
        }
    }

    cout << ans;
    return 0;
}