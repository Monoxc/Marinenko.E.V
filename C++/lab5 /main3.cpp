#include <iostream>
#include <iomanip> 

using namespace std;

int main() {

    setlocale(LC_ALL, "RU");

    double a, b, h;

    
    cout << "Введите начальное значение a: ";
    cin >> a;
    cout << "Введите конечное значение b: ";
    cin >> b;
    cout << "Введите шаг h: ";
    cin >> h;

   
    cout << "-------------------\n";
    cout << ":   X   :   Y   :\n";
    cout << "-------------------\n";

    double x = a; 

    while (x <= b) {
        if (x == 4) {
           
            cout << "Значение x = 4 не принадлежит области допустимых значений (ОДЗ).\n";
            break;
        }

       
        double y = 1 / ((x - 4) * (x - 4)) + 6;

        
        cout << ": " << setw(5) << x << " : " << setw(5) << y << " :\n";

        x += h; 
    }

    cout << "-------------------\n";

    return 0;
}

