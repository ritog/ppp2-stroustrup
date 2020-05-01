//This program looks bland as there is no unit of distance.

#include "../../std_lib_facilities.h"

int main() {
    vector<double> distances {};

    double sum {0.0};

    for (double i; cin >> i;) {
        distances.push_back(i);
        sum += i;
        }

    sort(distances);

    cout << "The smallest distance is: " << distances[0] << ".\n";
    cout << "The larget distance is: "
         << distances[distances.size()-1] << ".\n";
    cout << "Total distance in route: " << sum << ".\n";
    cout << "Mean distance between two cities: "
         << sum / distances.size() << ".";

    return 0;
}