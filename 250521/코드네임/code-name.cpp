#include <bits/stdc++.h>
using namespace std;

class Info{
    public:
    string id;
    int score;

    Info(string s, int i){
        id = s;
        score = i;
    }

    Info(){

    }
};

bool compare(const Info& p1, const Info& p2){
    return p1.score < p2.score;
}

int main() {
    vector<Info> v(5);

    for(int idx = 0; idx < 5; idx++){
        string s;
        int i;
        cin >> s >> i;
        v[idx] = Info(s, i);
    }

    sort(v.begin(), v.end(), compare);

    cout << v[0].id << ' ' << v[0].score;
}