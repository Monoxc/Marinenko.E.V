#include <iostream>
using namespace std;

int main() {
    int number, steps = 0;

  
    cout << "Enter a natural number: ";
    cin >> number;

    
    if (number <= 0) {
        cout << "The number must be positive and non-zero." << endl;
        return 1;  
    }

    
    while (number != 1) {
        cout << number << endl;  

   
        if (number % 2 == 0) {
            number /= 2;
        } else {  
            number = 3 * number + 1;
        }

        steps++;  
    }

   
    cout << number << endl;
    cout << "Steps = " << steps << endl;

    return 0;
}
