#include "../../std_lib_facilities.h"
using std::cin;
using std::string;
using std::cout;

int main() {
    int query {0};
    string word {" "};

    vector<string> names {
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine"};
    vector<int> nums {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Enter a number between 0 to 9 to get it in words:\n"
         << "Enter -1 to exit\n";
    while (cin >> query) {
        if (query == -1) {
            cout << "Exit by user. Use next function.\n";
            break;
        } else
        {cout << names.at(query) << "\n";}
    }
    cout << "Enter a number b/w 0 to 9 to get it in numeric. (e.g- \"one\"):\n"
         << "Enter XX to exit\n";
    while (cin >> word) {
        if (word == "XX") {
            cout << "Exit by user.\n";
            return 0;
        } else {
            auto it = find(begin(names), end(names), word);
            int index = distance(begin(names), it);
            cout << index << "\n";
        }
    }

    return 0;
    
}