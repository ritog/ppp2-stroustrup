//Exercise 4, the float version
#include "../../std_lib_facilities.h"

int main() {

double val1 {0};
double val2 {0};

cout << "Enter two numbers, separated by newlines:\n";
cin >> val1 >> val2;

//Comparing value
if (val1 > val2) {
    cout << val1 << " is the larger number.\n";
    cout << val2 << " is the smaller number.\n";
} else if (val1 < val2) {
    cout << val2 << " is the larger number.\n";
    cout << val1 << " is the smaller number.\n";
}

//Sum and difference
cout << "The sum of the two numbers is: " << (val1 + val2) << "\n";
cout << "The difference of the two numbers is: " << (val1 - val2) << "\n";

//product
cout << "The product of the numbers is: " << (val1 * val2) << "\n";

//ratio, this will be precise, because the variables are of double type
cout << "The ratio of the numbers is: " << (val1 / val2) << "\n";

return 0;
}