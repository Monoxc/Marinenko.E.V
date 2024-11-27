#include <iostream>
#include <cmath>  

#define M_PI 3.14159265358979323846
int main() {

    double a = 2.0;
    double b = 19.03;


    double numerator = 4.3 * sin((a / b + 1)  * M_PI);


    double denominator = (1 - cos((a / b - 1) * M_PI));

 
    double result = b / a * numerator / denominator + log(b);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
