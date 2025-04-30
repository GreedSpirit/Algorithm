#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    char c;
    cin >> c;

    int ans = 0;
    double avg = 0;
    
    for(int i = 0; i < n; i++){
        if(arr[i][0] == c){
            ans++;
            avg += arr[i].length();
        }
    }

    cout << ans << ' ';

    cout << fixed;
    cout.precision(2);
    cout << avg / ans;
}