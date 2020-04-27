#include "../../std_lib_facilities.h"

int main() {
    // double a {0};
    // double b {0};

    /*  
    IMPLEMENTION OF 1 IF YOU TAKE THE AUTHOR LITERALLY THAT THE PROGRAM SHOULD
    TERMINATE AT THE INPUT OF '|' ONLY. I AM NOT GOING TO DO THAT, BECAUSE
    ANYTHING OTHER THAN INTEGER VALUE BREAKS THE LOOP AND THE PROGRAM IS
    EXITED. SO '|' OR ANY OTHE CHARACTER OTHER THAN INTEGER FOR THAT MATTER,
    BREAKS THE LOOP AND THE PROGRAM IS EXITED.
    
    while (cin >> a >> b) {
        if (!(a == '|' || b == '|'))
            {cout << a << ' ' << b << '\n';}
    } 
    ==========================================================================
    */

    /* SOLUTION FOR INTEGER NUMBERS | REMEMBER TO CHANGE THE DECLARATION
    OF A AND B, TOO.

    while (cin >> a >> b) {
        cout << a << ' ' << b << '\n';
        cout << "The smaller value is: ";
        int smaller {(a < b) ? a : b};
        cout << smaller << '\n';
        cout << "The larger value is: ";
        int larger {(a > b) ? a : b};
        cout << larger << '\n';
        if ((a == b) ? true : false) {
            cout << "The two numbers are equal.\n";
        }

    }
    ===========================================================================
     */
/* IMPLEMENTATION FOR DOUBLE
    while (cin >> a >> b) {
        cout << a << ' ' << b << '\n';
        cout << "The smaller value is: ";
        double smaller {(a < b) ? a : b};
        cout << smaller << '\n';
        cout << "The larger value is: ";
        double larger {(a > b) ? a : b};
        cout << larger << '\n';
        if ((a == b) ? true : false) {
            cout << "The two numbers are equal.\n";
        }
        if ((a - b) < 1.0/100 && (b - a) < 1.0/100) { //abs of a-b
            cout << "The numbers are almost equal.\n";
        }  
    }*/

/*      
UP TO DRILL 6
        double a = 0.0;
        double largest = 0.0;
        double smallest = 1.7e308; //upper bound of double type
    while (cin >> a) {
        cout << a << "\n";
        if (a > largest) {
            largest = a;
            cout << largest << " is the largest number so far.";
        }
        if (a < smallest) {
            smallest = a;
            cout << smallest << " is the smallest number so far.";
        }
    } */

        double a = 0.0;
        double largest = 0.0;
        double smallest = 1.7e308;
        string unit = "";
        double sum = 0.0;
        double cm_to_m = 0.01;
        double in_to_m = 0.0254;
        double ft_to_m = 0.3048;
        int count = 0;
        vector<double> values_in_m {0};

    cout << "Enter a length with unit separated by a space.(in/ft/m/cm)\n";
    cout << "Example: \"12 in\", \"15.6 ft\"\n";
    while (cin >> a >> unit) {
        if (unit == "in" || unit == "ft" || unit == "m" || unit == "cm") {
            ++count;
            cout << a << " " << unit << "\n";
            if (unit == "in") {
                sum += a * in_to_m;
                values_in_m.push_back(a * in_to_m);
                if ((a * in_to_m) > largest) {largest = a * in_to_m;}
                if ((a * in_to_m) < smallest) {smallest = a * in_to_m;}
            }
            else if (unit == "ft") {
                sum += a * ft_to_m;
                values_in_m.push_back(a * ft_to_m);
                if ((a * ft_to_m) > largest) {largest = a * ft_to_m;}
                if ((a * ft_to_m) < smallest) {smallest = a * ft_to_m;}
            }
            else if (unit == "cm") {
                sum += a * cm_to_m;
                values_in_m.push_back(a * cm_to_m);
                if ((a * cm_to_m) > largest) {largest = a * cm_to_m;}
                if ((a * cm_to_m) < smallest) {smallest = a * cm_to_m;}
            }
            else if (unit == "m") {
                sum += a;
                values_in_m.push_back(a);
                if (a > largest) {largest = a;}
                if (a < smallest) {smallest = a;}
            }
        }
        else {
            cout << "Entered unit is not supported. Use a supported unit:\n";
        }
    }
    cout << "\nThe sum of values entered (in metres): "
         << sum << "\n";
    cout << "\nThe largest value (in metres) is: " << largest;
    cout << "\nThe smallest value is (in metres) is: " << smallest;
    cout << "\n";
    cout << "You have entered " << count << " numbers.\n";
    cout << "Entered values (in metres): \n";
    for (double x: values_in_m) {cout << x << " ";}
    return 0;
}