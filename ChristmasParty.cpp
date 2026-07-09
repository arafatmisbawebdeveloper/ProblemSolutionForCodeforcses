#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n;
    cin >> n;


    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }


    vector<long long> D(n + 1, 0);


    D[1] = 0;
    D[2] = 1;

    for (int i = 3; i <= n; ++i) {
        D[i] = ((i - 1) * (D[i - 1] + D[i - 2]) % MOD) % MOD;
    }

    cout << D[n] << endl;
    return 0;
}
