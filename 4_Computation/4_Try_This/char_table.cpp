#include "../../std_lib_facilities.h"

int main() {
    char letter = 'a';

    while(letter <= 'z') { //here <= operator works based on ASCII
        cout << letter << "\t" << int(letter) << "\n";
        ++letter;
        }


    return 0;
}