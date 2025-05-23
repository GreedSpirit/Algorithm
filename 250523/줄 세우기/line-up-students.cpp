#include <bits/stdc++.h>
using namespace std;

int n, idx;

class Info{
    public:
    int h;
    int w;
    int index;

    Info(int h, int w){
        this -> h = h;
        this -> w = w;
        index = ++idx;
    }

    Info(){

    }
};

bool cmp(const Info& a, const Info& b){
    if(make_tuple(a.h, a.w) == make_tuple(b.h, b.w)){
        return a.index < b.index;
    }
    return make_tuple(a.h, a.w) > make_tuple(b.h, b.w);
}

int main(){
    cin >> n;
    vector<Info> v(n);

    for(int i = 0; i < n; i++){
        int h, w;
        cin >> h >> w;
        v[i] = Info(h, w);
    }

    sort(v.begin(), v.end(), cmp);

    for(auto a : v){
        cout << a. h << ' ' << a.w << ' ' << a.index << '\n';
    }
}