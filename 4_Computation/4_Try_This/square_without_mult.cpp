#include "../../std_lib_facilities.h"

int square(int num) {
    int squared = 0;
    
    for (int i = 0; i < num; ++i) {
        squared += num;
    }

    return squared;
}

int main() {
    //The code below just checks if the function works.
    cout << "The square of 6 is "
         << square(6)
         << ".\n";

    return 0;
}