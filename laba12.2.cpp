#include <iostream>
#include <cmath>

#define M_PI 3.141592653589793  // Визначення числа π

using namespace std;

double f(double x) {
    return pow(3, cos(x * M_PI / 180));  // Перетворення градусів у радіани
}

int main() {
    double start_x = 10;  // Початкове значення x
    double step = 8;      // Крок
    int num_values = 6;   // Кількість значень

    for (int i = 0; i < num_values; ++i) {
        double x = start_x + i * step;
        double result = f(x);
        cout << "f(" << x << ") = " << result << endl;
    }

    return 0;
}
