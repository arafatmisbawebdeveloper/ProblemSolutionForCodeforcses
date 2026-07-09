#include <iostream>
#include <string>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    string s;
    cin >> s;

    int steps = 0;
    long long b_count = 0;


    for (int i = s.size() - 1; i >= 0; --i) {
        if (s[i] == 'b') {

            b_count = (b_count + 1) % MOD;
        } else if (s[i] == 'a') {

            steps = (steps + b_count) % MOD;

            b_count = (b_count * 2) % MOD;
        }
    }

    cout << steps << endl;
    return 0;
}


