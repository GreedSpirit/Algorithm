#include <bits/stdc++.h>
using namespace  std;

class student{
    public:
    string name;
    int k;
    int e;
    int m;

    student(string s, int i, int i2, int i3){
        name = s;
        k = i;
        e = i2;
        m = i3;
    }

    student(){

    }
};

bool compare(const student& a, const student& b){
    return make_tuple(a.k, a.e, a.m) > make_tuple(b.k, b.e, b.m);
}

int main(){
    int n;
    cin >> n;

    vector<student> v(n);

    for(int i = 0; i < n; i++){
        string s;
        int i1, i2, i3;
        cin >> s >> i1 >> i2 >> i3;
        v[i] = student(s, i1, i2, i3);
    }

    sort(v.begin(), v.end(), compare);
    
    for(auto a : v){
        cout << a.name << ' ' << a.k << ' ' << a.e << ' ' << a.m << '\n';
    }


}