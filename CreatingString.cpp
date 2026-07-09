#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;
const int MAX = 1000000;

// Precompute factorials and modular inverses
vector<long long> factorial(MAX + 1), inverse(MAX + 1);

// Function to calculate modular exponentiation
long long modExp(long long base, long long exp, long long mod) {
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

void precompute() {
    factorial[0] = 1;
    for (int i = 1; i <= MAX; ++i) {
        factorial[i] = (factorial[i - 1] * i) % MOD;
    }
    inverse[MAX] = modExp(factorial[MAX], MOD - 2, MOD); // Fermat's Little Theorem
    for (int i = MAX - 1; i >= 0; --i) {
        inverse[i] = (inverse[i + 1] * (i + 1)) % MOD;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    precompute();

    string s;
    cin>>s;
    map<char,long long> mp;
    for(auto u : s) mp[u]++;

    long long ans = factorial[s.size()];
     for ( auto i : mp ) ans = (ans * inverse[i.second]) % MOD;
     cout<<ans<<"\n";

    return 0;
}


