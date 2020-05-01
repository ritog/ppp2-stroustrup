#include "../../std_lib_facilities.h"

int main() {
    vector<double> values {0};

    for (double i; cin >> i;) {
        values.push_back(i);
    }

    sort(values);
    if (!(values.size() % 2)){
        cout << "The median of the values entered is: "
         << values[values.size()/2] << "\n";}
    else if ((values.size() % 2)) {
        cout << "The median of the values entered is: "
             << (values[values.size()/2] + values[(values.size()/2 -1)]) / 2;

    }
    return 0;

}