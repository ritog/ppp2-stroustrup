#include "../../std_lib_facilities.h"

int main() {
    cout << "Please enter your first name and age:\n";

    string first_name = "???";
    double age = -1;

    cin >> first_name >> age; //first entry is stored in first_name and so on

    //multiplying years by 12 to show age in months
    cout << "Hello, " << first_name << " (age " << age * 12 << " months)\n";

    return 0;
}