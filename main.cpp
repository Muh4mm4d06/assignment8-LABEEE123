#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double *baseRadius;
    double *height;

    cout << fixed << showpoint << setprecision(2);

    baseRadius = new double;
    *baseRadius = 1.5;

    height = new double;
    *height = 2 * (*baseRadius);   // height = 3.0

    cout << "Radius of the base: " << *baseRadius << endl;
    cout << "Height: " << *height << endl;

    cout << "Volume: "
         << 3.14 * (*baseRadius) * (*baseRadius) * (*height)
         << endl;

    cout << "Surface area: "
         << (2 * 3.14 * (*baseRadius) * (*baseRadius))
            + (2 * 3.14 * (*baseRadius) * (*height))
         << endl;

    return 0;
}
