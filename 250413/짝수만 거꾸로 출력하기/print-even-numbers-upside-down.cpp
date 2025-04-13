#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> dir;
    int cnt = 0;

    while(n--){
        int p;
        cin >> p;

        if(p % 2 == 0){
            dir.push_back(p);
        }
    }

    for(int i = 0; i < dir.size(); i++){
        cout << dir[dir.size() - i - 1] << ' ';
    }
}