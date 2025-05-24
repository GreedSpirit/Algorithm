#include <bits/stdc++.h>
using namespace std;

class Info{
    public:
    string name;
    int h;
    float w;

    Info(){

    }
    Info(string s, int i, float i2){
        name = s;
        h = i;
        w = i2;
    }
};

bool cmp(const Info& a, const Info& b){
    if(a.h == b.h) return a.w > b.w;
    return a.h < b.h;
}



int main(){
    int n;
    cin >> n;
    vector<Info> v(n);

    for(int i = 0; i < n; i++){
        string s;
        int i1;
        float i2;
        cin >> s >> i1 >> i2;
        v[i] = Info(s, i1, i2);
    }

    sort(v.begin(), v.end(), cmp);

    for(auto a : v){
        cout << a.name << ' ' << a.h << ' ' << a.w << '\n';
    }
}
