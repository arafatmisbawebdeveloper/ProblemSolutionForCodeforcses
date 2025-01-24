#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

// Function to calculate modular exponentiation
long long mod_exp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    int n; // Total length of the sequence
    string prefix; // Prefix string
    cin >> n;
    cin >> prefix;

    // Ensure n is even for a valid full sequence
    if (n % 2 != 0) {
        cout << 0 << endl;
        return 0;
    }

    int open_count = 0, close_count = 0;

    // Count open and close brackets in the prefix
    for (char c : prefix) {
        if (c == '(') open_count++;
        else close_count++;
        if (close_count > open_count) {
            cout << 0 << endl; // Invalid prefix, too many close brackets
            return 0;
        }
    }

    // Remaining open and close brackets
    int remaining_open = n / 2 - open_count;
    int remaining_close = n / 2 - close_count;

    // If the remaining close brackets are less than 0, invalid
    if (remaining_open < 0 || remaining_close < 0) {
        cout << 0 << endl;
        return 0;
    }

    // Precompute factorials and inverses
    vector<long long> fact(n + 1, 1);
    for (int i = 2; i <= n; ++i) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }

    vector<long long> inv_fact(n + 1, 1);
    for (int i = 0; i <= n; ++i) {
        inv_fact[i] = mod_exp(fact[i], MOD - 2, MOD);
    }

    // Calculate the number of ways using combinatorics
    // Ways = C(remaining_open + remaining_close, remaining_open)
    long long ways = (fact[remaining_open + remaining_close] * inv_fact[remaining_open]) % MOD;
    ways = (ways * inv_fact[remaining_close]) % MOD;

    cout << ways << endl;
    return 0;
}

