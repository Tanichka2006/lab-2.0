#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a;
    cin >> a;

    double z1 = ((a + 2) / sqrt(2 * a) - a / (sqrt(2 * a) + 2) + 2 / (a - sqrt(2 * a))) * (sqrt(a) - sqrt(2)) / (a + 2);
    double z2 = 1 / (sqrt(a) + sqrt(2));

    cout << z1 << endl;
    cout << z2 << endl;

    if (fabs(z1 - z2) < 1e-6) {
        cout << "Results match." << endl;
    }
    else {
        cout << "Results do not match." << endl;
    }

    return 0;
}