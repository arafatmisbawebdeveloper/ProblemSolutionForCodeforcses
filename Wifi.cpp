#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int fact(int n) {
    return (n == 0 || n == 1) ? 1 : n * fact(n - 1);
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;


    int target = 0;
    for (char c : s1) {
        target += (c == '+') ? 1 : -1;
    }

    int crnt = 0;
    int unrecognized = 0;
    for (char c : s2) {
        if (c == '+') {
            crnt += 1;
        } else if (c == '-') {
            crnt -= 1;
        } else if (c == '?') {
            unrecognized++;
        }
    }

    int displacement = target - crnt;
    if ((displacement + unrecognized) % 2 != 0 || abs(displacement) > unrecognized) {
        cout << fixed << setprecision(12) << 0.0 << endl;
        return 0;
    }

    int plus_needed = (displacement + unrecognized) / 2;
    int combinations = fact(unrecognized) / (fact(plus_needed) * fact(unrecognized - plus_needed));

    int total_possibilities = pow(2, unrecognized);

    double probability = (double)combinations / total_possibilities;

    cout << fixed << setprecision(12) << probability << endl;
    return 0;
}
