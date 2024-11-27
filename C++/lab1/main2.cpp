#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double pi = 3.141592653589793;

    double exponent1 = exp((0.5 * (1 - cos(0.707) * pi)) / (1 - sin(4) * pi));

    double exponent2 = exp((0.3 * (1 + cos(4) * pi)) / (1 + sin(0.707) * pi));

    double result = pow(exponent1 + exponent2, 3.0 / 2.0);

    cout << result << endl;

    return 0;
}
