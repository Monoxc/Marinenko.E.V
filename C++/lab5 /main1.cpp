#include <iostream>
#include <cmath> 
using namespace std;

int main() {

    setlocale(LC_ALL, "RU");


    double x[5];
    int i = 0;

   
    do {
        cout << "Введите значение x[" << i + 1 << "]: ";
        cin >> x[i];
        i++;
    } while (i < 5);  

 
    i = 0;

  
    do {
        double y = pow(sin(x[i]), 5) + fabs(5 * x[i] - 1.5);
        cout << "y при x = " << x[i] << " равно: " << y << endl;
        i++;    
    } while (i < 5);  

    return 0;
}

