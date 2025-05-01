#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a;

    char ex = 'A';

    vector<char> v;
    vector<int> i;

    int cnt = 0;

    int sum = 0;

    for(auto c : a){
        if(c != ex){
            ex = c;
            v.push_back(c);
            if(cnt != 0){
                i.push_back(cnt);
            }
            cnt = 1;
        }
        else{
            cnt++;
            if(cnt == 10) sum++;
            else if(cnt == 100) sum++;
            else if(cnt == 1000) sum++;
        }
    }
    i.push_back(cnt);

    cout << v.size() * 2 + sum;
    cout << '\n';
    for(int j = 0; j < v.size(); j++){
        cout << v[j] << i[j];
    }
}