#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> vecA;

    for(int i = 0; i < N; i++){
        int v, t;
        cin >> v >> t;
        for(int j = 0; j < t; j++){
            vecA.push_back(v);
        }
    }

    vector<int> vecB;

    for(int i = 0; i < M; i++){
        int v, t;
        cin >> v >> t;
        for(int j = 0; j < t; j++){
            vecB.push_back(v);
        }
    }

    vector<int> disA;
    vector<int> disB;
    int FS = 5;
    
    for(int i = 0; i < vecA.size(); i++){
        if(i == 0){
            disA.push_back(vecA[i]);
        }
        else    disA.push_back(vecA[i] + disA.back());
    }
    for(int i = 0; i < vecB.size(); i++){
        if(i == 0){
            disB.push_back(vecB[i]);
        }
        else    disB.push_back(vecB[i] + disB.back());
    }

    // for(auto a : disA){
    //     cout << a << ' ';
    // }
    // cout << '\n';
    // for(auto a : disB){
    //     cout << a << ' ';
    // }

    int ans = 0;

    for(int i = 0; i < disA.size(); i++){
        int tmp = FS;
        if(disA[i] > disB[i]){
            FS = 0;
        }
        else if(disA[i] == disB[i]){
            FS = 1;
        }
        else{
            FS = 2;
        }

        if(FS != tmp){
            ans++;
        }
    }

    cout << ans;


    return 0;
}