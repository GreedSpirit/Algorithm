#include <iostream>
using namespace std;

int main() {

    int arr[2000][2000] = {};

    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;
    for(int i = x1 + 1000; i < x2 + 1000; i++){
        for(int j = y1 + 1000; j < y2 + 1000; j++){
            arr[i][j] = 1;
        }
    }

    cin >> x1 >> y1 >> x2 >> y2;
    for(int i = x1 + 1000; i < x2 + 1000; i++){
        for(int j = y1 + 1000; j < y2 + 1000; j++){
            arr[i][j] = 0;
        }
    }

    int maxx, maxy, minx, miny;
    maxx = 0;
    maxy = 0;
    minx = 2000;
    miny = 2000;

    for(int i = 0; i < 2000; i++){
        for(int j = 0; j < 2000; j++){
            if(arr[i][j]){
                maxx = max(maxx, i);
                minx = min(minx, i);
                maxy = max(maxy, j);
                miny = min(miny, j);
            }
        }
    }

    cout << (maxx + 1 - minx) * (maxy + 1 - miny);

    return 0;
}