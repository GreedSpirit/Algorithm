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
    return a.name < b.name;
}

bool cmp2(const Info& a, const Info& b){
    return a.h > b.h;
}


int main(){
    vector<Info> v(5);

    for(int i = 0; i < 5; i++){
        string s;
        int i1;
        float i2;
        cin >> s >> i1 >> i2;
        v[i] = Info(s, i1, i2);
    }

    sort(v.begin(), v.end(), cmp);

    cout << "name" << '\n';
    for(auto a : v){
        cout << a.name << ' ' << a.h << ' ' << a.w << '\n';
    }
    cout << '\n';

    sort(v.begin(), v.end(), cmp2);

    cout << "height" << '\n';
    for(auto a : v){
        cout << a.name << ' ' << a.h << ' ' << a.w << '\n';
    }
}
