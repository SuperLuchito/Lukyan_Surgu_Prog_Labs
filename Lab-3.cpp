#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int x, y, z;

    cin >> x >> y;

    if ((x != 0) and (y != 0)) {

        z = (min(0, x) - min(0, y)) / (pow(max(y, x), 2));

        switch(z) {
            case 0: 
                cout << "Monday";
                break;
            case 1:
                cout << "Tuesday";
                break;
            case 2: 
                cout << "Wensday";
                break;
            case 3:
                cout << "Thursday";
                break;
            case 4:
                cout << "Friday";
                break;
            case 5:
                cout << "Saturday";
                break;
            case 6:
                cout << "Sunday";
                break;
        }
    }
    return 0;
}