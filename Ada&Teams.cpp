#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int MOD = 1000000007;
const int MAX = 1000000;

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

    int N, A, B, D;
    string line;
    while (getline(cin, line)) {
        sscanf(line.c_str(), "%d %d %d %d", &N, &A, &B, &D);


        long long choose_schools = comb(N, A);


        long long choose_students_per_school = comb(B, D);


        long long choose_students_total = mod_exp(choose_students_per_school, A, MOD);


        long long result = choose_schools * choose_students_total % MOD;
        cout << result << endl;
    }

    return 0;
}

