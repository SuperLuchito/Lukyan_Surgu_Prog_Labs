#include <iostream>
#include <cmath>

using namespace std;

double maxOfThree(double a, double b, double c) {
    return max(max(a, b), c);
}

int main() {
    double k, l, m;
    
    cout << "Введите значения k, l и m: ";
    cin >> k >> l >> m;
    
    double a = maxOfThree(k * k, l, sqrt(m));
    double b = maxOfThree(pow(3, m), pow(l, 3), k + l);
    
    if (a == 0) {
        cout << "Уравнение не имеет решения, так как a равно нулю." << endl;
    } else {
        double x = -b / a;
        cout << "Решение уравнения: x = " << x << endl;
    }
    
    return 0;
}