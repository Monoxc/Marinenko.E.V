#include <iostream>
using namespace std;

int main() {

    setlocale(LC_ALL, "RU");

    int N, product = 1;
    bool even_found = false;

    cout << "Введите трёхзначное число: ";
    cin >> N;

   
    for (int i = 0; i < 3; ++i) { 
        int digit = N % 10;
        if (digit % 2 == 0) {
            product *= digit;
            even_found = true;

        }
        N /= 10;
    }
    
   
    if (even_found) {
        cout << "Произведение парных цифр: " << product << endl;
    }
    else {
        cout << "Парных цифр нет." << endl;
    }

    return 0;
}
