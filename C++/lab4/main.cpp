#include <iostream>
using namespace std;

int main() {
    bool answer;
    int value;
    cout << "Enter a value: ";
    cin >> value;
    
    answer = (value >= 0 && value <= 10) ||
    (value * 2 < 20 && value - 2 > -2) ||
    (value - 1 > 1 && value / 2.0 < 10) ||
    (value == 111);
    
    cout << (answer ? "ЦЕ ПРАВДА" : "ЦЕ НЕ ПРАВДА") << endl;
    return 0;
    
    }
