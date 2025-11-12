#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 
#include <utility>   

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, char>> people(n);
    for (int i = 0; i < n; ++i) {
        cin >> people[i].first >> people[i].second;
    }

    sort(people.begin(), people.end());

    int max_photo_size = 0; 

    for (int i = 0; i < n; ++i) {
        
        int g_count = 0;
        int h_count = 0;

        for (int j = i; j < n; ++j) {
            
            if (people[j].second == 'G') {
                g_count++;
            } else {
                h_count++;
            }

            bool is_valid = false;
            if (g_count == 0) { 
                is_valid = true;
            } else if (h_count == 0) { 
                is_valid = true;
            } else if (g_count == h_count) { 
                is_valid = true;
            }

            if (is_valid) {
                int current_size = people[j].first - people[i].first;
                
                if (current_size > max_photo_size) {
                    max_photo_size = current_size;
                }
            }
        }
    }

    cout << max_photo_size << endl;

    return 0;
}