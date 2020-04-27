//in this program, we reuse some code from currency_converter.cpp

#include "../../std_lib_facilities.h"

int main (){
    constexpr double yen_to_dollars = 0.0093; //rates as per 26 Apr, 2020
    constexpr double euro_to_dollars = 1.08;
    constexpr double pound_to_dollars = 1.24;
    constexpr double krone_to_dollars = 0.094;
    constexpr double yuan_to_dollars = 0.14;

    double amount = 0.0;
    int currency = 0; //using int as switch doesn't support string

    cout << "Enter an amount to convert to US Dollars.\n"
         << "(Add currency (1. YEN/2. GBP/3. EUR/4. NOK/5. CNY)"
         << "after a space.)\n"
         << "\nExample: 457.5 1 means 457.5 YEN\n";


    cin >> amount >> currency;

    switch (currency) {
        case 1:
        cout << amount << " YEN is equal to US$ " << amount * yen_to_dollars;
        break;
        case 2:
        cout << amount << " GBP is equal to US$ " << amount * pound_to_dollars;
        break;
        case 3:
        cout << amount << " EUR is equal to US$ " << amount * euro_to_dollars;
        break;
        case 4:
        cout << amount << " NOK is equal to US$ " << amount * krone_to_dollars;
        break;
        case 5:
        cout << amount << " YEN is equal to US$ " << amount * yuan_to_dollars;
        break;
        default:
        cout << "That currency is not available for conversion.";
    }
    cout << "\n";  

    return 0;      

}