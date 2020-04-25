#include "../../std_lib_facilities.h"

int main() {
    cout << "Please enter a floating point value: ";
    int n;
    cin >> n;
    double dn = n; //storing n to a double
    cout << "\nsquare root of n ==" << sqrt(dn);

    return 0;
}