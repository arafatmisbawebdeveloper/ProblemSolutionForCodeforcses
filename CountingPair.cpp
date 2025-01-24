#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to count interesting pairs for a single test case
long long countPairs(int n, long long x, long long y, vector<int> &arr) {
    long long total_sum = 0;
    for (int num : arr) total_sum += num;

    long long L = total_sum - y;
    long long U = total_sum - x;

    sort(arr.begin(), arr.end()); // Sort the array

    long long count = 0;

    // Two-pointer approach
    for (int i = 0; i < n; i++) {
        long long low = L - arr[i];
        long long high = U - arr[i];

        // Find the range of valid pairs
        int left = lower_bound(arr.begin() + i + 1, arr.end(), low) - arr.begin();
        int right = upper_bound(arr.begin() + i + 1, arr.end(), high) - arr.begin() - 1;

        if (left <= right) {
            count += (right - left + 1);
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    vector<long long> results;

    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        results.push_back(countPairs(n, x, y, arr));
    }

    for (long long res : results) {
        cout << res << "\n";
    }

    return 0;
}

