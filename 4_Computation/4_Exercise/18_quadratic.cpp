#include "../../std_lib_facilities.h"

int main() {
    double a {0.0};
    double b {0.0};
    double c {0.0};
    double x1 {0.0};
    double x2 {0.0};

    cout << "If a quadratic equation is assumed to be of the form "
         << "ax^2 + bx + c = 0, "
         << "Enter a, b, c separated with a space:\n";
    cin >> a >> b >> c;

    x1 = ((b * b) + sqrt(4 * a * c))/(2 * a);
    x2 = ((b * b) - sqrt(4 * a * c))/(2 * a);

    cout << "The two roots of the equation are:\n "
         << "x1 = " << x1 << "\n"
         << "x2 = " << x2 << "\n";

    return 0;


}