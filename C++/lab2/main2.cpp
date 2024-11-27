#include <iostream>
using namespace std;

int main() {

    setlocale(LC_ALL, "RU");
    
    double x, y;

    // Введення координат точки
    cout << "Введіть координати точки (x, y): ";
    cin >> x >> y;

    // Умови для трикутника і півкола
    if ((x >= 0 && y >= 0 && x + y <= 1) || (x <= 0 && y <= 0 && x * x + y * y <= 1)) {
        cout << "Точка в заштрихованій області." << endl;
    }
    else {
        cout << "Точка не належить заштрихованій області." << endl;
    }

    return 0;
}
