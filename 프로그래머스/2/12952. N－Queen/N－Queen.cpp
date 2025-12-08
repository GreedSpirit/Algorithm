#include <string>
#include <vector>

using namespace std;

int arr[20][20];
int vis[20];
int vis2[40];
int vis3[40];

int ans;

void func(int k, int N){ // k번째 행에 넣을 것
    if(k == N){
        ans++;
        return;
    }
    
    for(int i = 0; i < N; i++){
        if(!vis[i] && !vis2[i + k] && !vis3[k - i + N - 1]){
            vis[i] = 1;
            vis2[i + k] = 1;
            vis3[k - i + N - 1] = 1;
            func(k + 1, N);
            vis[i] = 0;
            vis2[i + k] = 0;
            vis3[k - i + N - 1] = 0;
        }
    }
    return;
}

int solution(int n) {
    func(0, n);    
    int answer = ans;
    return answer;
}