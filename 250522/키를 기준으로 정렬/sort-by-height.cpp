#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int h;
    int w;

    Person(string s, int i, int i2){
        name = s;
        h = i;
        w = i2;
    }
    Person(){

    }
};

bool compare(Person a, Person b){
    return a.h < b.h;
}

int main() {
    int n;
    cin >> n;

    vector<Person> v(n);

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        int h, w;
        cin >> h >> w;
        v[i] = Person(s, h, w);
    }
    sort(v.begin(), v.end(), compare);

    for(auto a : v){
        cout << a.name << ' ' << a.h << ' ' << a.w;
        cout << '\n';
    }

}