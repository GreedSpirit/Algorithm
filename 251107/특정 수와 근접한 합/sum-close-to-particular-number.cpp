#include <iostream>

using namespace std;

int N, S;
int arr[100];

int main() {
    cin >> N >> S;
    int sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    int ans = 10000;
    for(int i = 0; i < N - 1; i++){
        for(int j = i + 1; j < N; j++){
            ans = min(ans, abs(S - sum + arr[i] + arr[j]));
        }
    }
    cout << ans;

    return 0;
}