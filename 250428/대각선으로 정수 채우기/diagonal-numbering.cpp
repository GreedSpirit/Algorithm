#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n][m] = {};

    int st = 1;

    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            if(arr[row][col] == 0){
                int cur_row = row;
                int cur_col = col;

                while(cur_row < n && cur_col >= 0){
                    arr[cur_row++][cur_col--] = st++;
                }
            }
        }
    }

    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            cout << arr[row][col] << ' ';
        }
        cout << '\n';
    }
}