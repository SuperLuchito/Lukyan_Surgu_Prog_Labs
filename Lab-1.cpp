#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float A, B, C, a, S;
    
    cin >> A >> B >> C >> a;
    
    if ((A + B + C) == 3.14) {
        S = ((a * a) * sin(B) * sin(C)) / (2 * sin(A));
        cout << S;
    }
    return 0;
}