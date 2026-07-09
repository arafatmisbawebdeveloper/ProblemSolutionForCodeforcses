#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d ;

    double p = a/b;
    double q = c/d;


    double result = p / (p + q - p * q);


    cout << fixed << setprecision(12) << result << endl;

    return 0;
}
