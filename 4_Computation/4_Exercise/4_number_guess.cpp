#include "../../std_lib_facilities.h"

int main(){
    cout << "Guess a number within 1 and 100. Remember it!";
    cout << "Is your number 50? (Y/N)\n";
    char answer {' '};
    cin >> answer;
    if (answer == 'Y') {
        cout << "I have guessed your number.\n";
    }
    else if (answer == 'N') {
        cout << "Is your number greater than or less than 50?\n";
    }
    


}