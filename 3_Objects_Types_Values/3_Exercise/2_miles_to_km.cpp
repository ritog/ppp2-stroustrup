#include "../../std_lib_facilities.h"

int main() {
    long double miles = 0.0; //the user might enter a really long distance
    cout << "Enter a distance in Miles to convert it to Kilometres:\n";
    cin >> miles;
    cout << "The distance you entered in Miles is equal to "
         << miles * 1.609
         << " Kilometres.\n";

    return 0;
}