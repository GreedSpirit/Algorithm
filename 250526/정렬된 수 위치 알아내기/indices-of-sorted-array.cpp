#include <bits/stdc++.h>
using namespace std;

int cnt;

class f{
    public:
    int x;
    int idx;

    f(){

    }

    f(int x){
        this -> x = x;
        this -> idx = cnt++;
    }
};

bool cmp(const f& a, const f& b){
    if(a.x == b.x){
        return a.idx < b.idx;
    }
    return a.x < b.x;
}

int main() {
    int n;
    cin >> n;
    vector<f> v(n);
    vector<int> ans(n);

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;;
        v[i] = f(x);
    }
    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < n; i++){
        ans[v[i].idx] = i + 1;
    }
    for(auto a : ans){
        cout << a << ' ';
    }
}