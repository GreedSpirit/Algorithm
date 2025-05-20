#include <bits/stdc++.h>
using namespace std;

class Info{
    public:
    string name;
    string bun;
    string place;

    Info(string s, string s2, string s3){
        name = s;
        bun = s2;
        place = s3;
    }

    Info(){

    }
};

bool compare(const Info& p1, const Info& p2){
    return p1.name < p2.name;
}

int main() {
    int n;
    cin >> n;
    vector<Info> v(n);

    for(int idx = 0; idx < n; idx++){
        string s;
        string s2;
        string s3;
        cin >> s >> s2 >> s3;
        v[idx] = Info(s, s2, s3);
    }

    sort(v.begin(), v.end(), compare);

    cout << "name " << v[n - 1].name << '\n';
    cout << "addr " << v[n - 1].bun << '\n';
    cout << "city " << v[n - 1].place;
}