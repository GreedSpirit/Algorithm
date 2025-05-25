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
    if(a.x == b.x){
        return a.y > b.y;
    }
    return a.x < b.x;
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
        cout << a.x << ' ' << a.y << ' ' << a.idx + 1 << '\n';
    }
}