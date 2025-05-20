#include <bits/stdc++.h>
using namespace std;

class info{
    public:
    string date;
    string day;
    string weather;

    info(string s, string s2, string s3){
        date = s;
        day = s2;
        weather = s3;
    }

    info(){

    }
};

bool compare(const info& a, const info& b){
    int ay = stoi(a.date.substr(0, 4));
    int am = stoi(a.date.substr(5, 2));
    int ad = stoi(a.date.substr(8, 2));

    int by = stoi(b.date.substr(0, 4));
    int bm = stoi(b.date.substr(5, 2));
    int bd = stoi(b.date.substr(8, 2));

    if (ay != by) return ay < by;
    if (am != bm) return am < bm;
    return ad < bd;
}

int main() {
    int n;
    cin >> n;

    vector<info> v(n);

    for(int i = 0; i < n; i++){
        string s, s2, s3;
        cin >> s >> s2 >> s3;
        v[i] = info(s, s2, s3);
    }

    sort(v.begin(), v.end(), compare);

    for(auto a : v){
        if(a.weather == "Rain"){
            cout << a.date << ' ' << a.day << ' ' << a.weather;
            return 0;
        }
    }
}