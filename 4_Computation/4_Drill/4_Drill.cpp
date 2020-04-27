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

        double a = 0.0;
        double largest = 0.0;
        double smallest = 0.0;
    while (cin >> a) {
        cout << a << "\n";
        if (a > largest) {
            largest = a;
            cout << largest << " is the largest number so far.";
        }
        smallest = a;
        if (a < smallest) {
            smallest = a;
            cout << smallest << " is the smallest number so far.";
        }
    }


    return 0;
}