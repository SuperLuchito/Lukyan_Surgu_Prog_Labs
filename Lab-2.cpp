#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float f, y, x, z;

    scanf("%f %f %f", &y, &x, &z);

    if (y != x) {
        f = pow(y, x) + (sqrt(abs(x) + exp(y)) - ((pow(z, 3) * pow(sin(y), 2)) / (y + (pow(z, 2) / (y - x)))));

        printf("Ответ: %f", f);
    } else {
        printf("Вы не правильно ввели задаваемые значения");
    }
    return 0;
}