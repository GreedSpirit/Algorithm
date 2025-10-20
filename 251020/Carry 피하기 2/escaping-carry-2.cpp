#include <bits/stdc++.h>

using namespace std;

int n;
string arr[20];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = -1;
    bool isok = true;


    for(int i = 0; i < n - 2; i++){
        for(int k = i + 1; k < n - 1; k++){
            for(int j = k + 1; j < n; j++){
                isok = true;
                int q = stoi(arr[i]);
                int w = stoi(arr[k]);
                int e = stoi(arr[j]);

                for(int l = 0; l < 6; l++){
                    int qn = q % 10;
                    int wn = w % 10;
                    int en = e % 10;
                    if(qn + wn + en >= 10){
                        isok = false;
                        break;
                    }
                    q = q / 10;
                    w = w / 10;
                    e = e / 10;
                }

                if(isok){
                    q = stoi(arr[i]);
                    w = stoi(arr[k]);
                    e = stoi(arr[j]);
                    ans = max(ans, q + w + e);
                }
            }
        }
    }
    cout << ans;

    return 0;
}