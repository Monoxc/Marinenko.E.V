#include <iostream>
using namespace std;

double calculateY(double x, double a, double c) {
    double Y;


    if (x <= 0) {
        Y = 2 * x * x + a;
    }
    else {
        Y = (x + 3 * a) * c;
    }


    return Y;
}

int main() {

    setlocale(LC_ALL, "RU");
    
    double x = -3;
    double a = 2.0;
    double c = 3.0;
  
    double Y = calculateY(x, a, c);

    cout << "Значення Y: " << Y << endl;

    return 0;
}

