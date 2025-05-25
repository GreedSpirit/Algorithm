#include <bits/stdc++.h>
using namespace std;

int cnt;

class f{
    public:
    int x;
    int y;
    int idx;

    f(){

    }

    f(int x, int y){
        this -> x = x;
        this->y = y;
        this -> idx = cnt++;
    }
};

bool cmp(const f& a, const f& b){
    if(abs(a.x) + abs(a.y) == abs(b.x) + abs(b.y)){
        return a.idx < b.idx;
    }
    return abs(a.x) + abs(a.y) < abs(b.x) + abs(b.y);
}

int main() {
    int n;
    cin >> n;
    vector<f> v(n);

    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        v[i] = f(x, y);
    }
    sort(v.begin(), v.end(), cmp);

    for(auto a : v){
        cout << a.idx + 1 << '\n';
    }
}