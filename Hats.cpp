#include <iostream>
#include <vector>
using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}


long long derangement(int n) {
    if (n == 0) return 1;
    if (n == 1) return 0;

    vector<long long> D(n + 1);
    D[0] = 1;
    D[1] = 0;
    for (int i = 2; i <= n; ++i) {
        D[i] = (i - 1) * (D[i - 1] + D[i - 2]);
    }
    return D[n];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long D = derangement(n);
        long long total = factorial(n);

        cout << D << "/" << total << endl;
    }
    return 0;
}

