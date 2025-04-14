#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;

    for(int i = 1; i <= 10; i++){
        int n;
        cin >> n;
        v.push_back(n);
    }

    int sum = 0;
    double avg = 0;

    for(int i = 1; i <= 10; i++){
        if(i % 2 == 0) sum += v[i - 1];
        if(i % 3 == 0) avg += v[i - 1];
    }
    cout << sum << ' ';

    cout << fixed;
    cout.precision(1);
    cout << avg / 3;
}
