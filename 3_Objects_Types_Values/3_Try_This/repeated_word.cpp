#include "../../std_lib_facilities.h"

int main() {
    string previous = "";
    string current;

    int number_of_words = 0;

    while (cin >> current) {
        ++number_of_words;
        if (current == previous) {
            cout << "word no. " << number_of_words
                 << "\nRepeated word: " << current << "\n";
        }
        previous = current;
    }

    return 0;

}