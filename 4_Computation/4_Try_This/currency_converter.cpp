#include "../../std_lib_facilities.h"

int main() {
    constexpr double yen_to_dollars = 0.0093; //rates as per 26 Apr, 2020
    constexpr double euro_to_dollars = 1.08;
    constexpr double pound_to_dollars = 1.24;

    double amount = 0.0;
    string currency = "";

    cout << "Enter an amount to convert to US Dollars: \n"
         << "(Add currency (YEN/GBP/EUR) after a space.)\n";

    cin >> amount >> currency;

    if (currency == "YEN") {
        cout << amount << " YEN is equal to US$" << amount * yen_to_dollars; 
    } else if (currency == "GBP") {
        cout << amount << " GBP is equal to US$" << amount * pound_to_dollars;
    } else if (currency == "EUR") {
        cout << amount << " EUR is equal to US$" << amount * euro_to_dollars;
        } else {
            cout << "That currency is not available for conversion.";
        }
    cout << "\n"; //extra newline for aesthetics
    return 0;



}