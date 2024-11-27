#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "RU");

    int sum = 0; 
    int num;    

 
    for (int i = 1; i <= 10; i++) {
        cout << "Введите натуральное число #" << i << ": ";
        cin >> num;

      
        if (num <= 0) {
            cout << "Ошибка: число должно быть натуральным (больше нуля). Повторите ввод." << endl;
            i--; 
            continue;
        }

        sum += num * num; 
    }

    
    cout << "Сумма квадратов введенных чисел: " << sum << endl;

    return 0;
}
