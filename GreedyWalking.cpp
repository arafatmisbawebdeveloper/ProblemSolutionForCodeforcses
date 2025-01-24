#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;
const int MAX = 500;


vector<long long> fact(MAX + 1, 1);
vector<long long> inv_fact(MAX + 1, 1);


long long mod_exp(long long a, long long b, int mod) {
    long long result = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % mod;
        }
        a = (a * a) % mod;
        b /= 2;
    }
    return result;
}


void precompute() {
    for (int i = 2; i <= MAX; ++i) {
        fact[i] = fact[i - 1] * i % MOD;
    }
    inv_fact[MAX] = mod_exp(fact[MAX], MOD - 2, MOD);
    for (int i = MAX - 1; i >= 1; --i) {
        inv_fact[i] = inv_fact[i + 1] * (i + 1) % MOD;
    }
}


long long comb(int n, int k) {
    if (k > n || k < 0) return 0;
    return fact[n] * inv_fact[k] % MOD * inv_fact[n - k] % MOD;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute();

    while (true) {
        int N;
        cin >> N;
        if (N == 0) break;

        vector<int> start(N), target(N);


        for (int i = 0; i < N; ++i) {
            cin >> start[i];
        }
        for (int i = 0; i < N; ++i) {
            cin >> target[i];
        }


        vector<int> steps(N);
        int total_steps = 0;

        for (int i = 0; i < N; ++i) {
            steps[i] = target[i] - start[i];
            total_steps += steps[i];
        }


        long long result = fact[total_steps];
        for (int i = 0; i < N; ++i) {
            result = result * inv_fact[steps[i]] % MOD;
        }

        cout << result << endl;
    }

    return 0;
}
