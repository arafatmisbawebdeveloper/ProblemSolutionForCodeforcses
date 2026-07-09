#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N; // Size of the array
        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }


        int maxSum = 0;
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                maxSum = max(maxSum, A[i] + A[j]);
            }
        }


        int correctPairs = 0, totalPairs = 0;
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                totalPairs++;
                if (A[i] + A[j] == maxSum) {
                    correctPairs++;
                }
            }
        }


        double probability = (double)correctPairs / totalPairs;


        cout << fixed << setprecision(9) << probability << endl;
    }

    return 0;
}

