#include <iostream>
using namespace std;

int main() {
    int N;

    
    cout << "Введіть натуральне число N: ";
    cin >> N;

    
    if (N <= 0) {
        cout << "Число має бути натуральним (більше 0)." << endl;
        return 1;
    }

    int sum = 0; 

    while (N > 0) {
        int digit = N % 10; 
        if (digit > 5) {
            sum += digit; 
        }
        N /= 10; 
    }

    
    cout << "Сума цифр, більших за 5: " << sum << endl;

    return 0;
}

