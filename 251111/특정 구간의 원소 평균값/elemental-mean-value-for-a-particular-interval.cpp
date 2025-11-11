#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int total_good_segments = 0; 

    for (int i = 0; i < n; ++i) {
        
        long long current_sum = 0; 

        for (int j = i; j < n; ++j) {
            
            current_sum += arr[j]; 
            int current_count = j - i + 1; 

            if (current_sum % current_count != 0) {
                continue; 
            }

            long long avg = current_sum / current_count;

            bool found_in_segment = false;
            for (int k = i; k <= j; ++k) {
                if (arr[k] == avg) {
                    found_in_segment = true;
                    break; 
                }
            }

            if (found_in_segment) {
                total_good_segments++;
            }
        }
    }

    cout << total_good_segments << endl;

    return 0;
}