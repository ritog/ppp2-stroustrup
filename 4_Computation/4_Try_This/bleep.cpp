#include "../../std_lib_facilities.h"

int main() {
    string disliked = "grokking";

    vector<string> words {""};
    for (string current; cin >> current;) {
        if (current == disliked) {words.push_back("BLEEP");} 
        else {words.push_back(current);}}

    cout << "\nThe words you entered, are:" << "\n";

    for (auto x: words) {
        cout << x << "\n";
    }
    vector<char> alphabet(26);
    for (auto x: alphabet) {
        cout << x << "\n";

    return 0;
}