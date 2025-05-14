#include <bits/stdc++.h>
using namespace std;

int n, m;
int ans;
vector<int> v;

void f(){
    while(m != 1){
        ans += v[m - 1];
        if(m % 2){
            m -= 1;
        }
        else{
            m /= 2;
        }
    }
}

int main() {
    
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    f();
    cout << ans + v[0];


}