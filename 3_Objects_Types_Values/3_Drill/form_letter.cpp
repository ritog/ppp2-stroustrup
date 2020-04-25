#include "../../std_lib_facilities.h"

int main() {
    string first_name = "";
    cout << "Whom do you like to write the letter to?\n" << endl;
    cin >> first_name;
    cout << "Dear " << first_name << ",\n\tHow are you?"
         << " I am doing fine.\n";
    string friend_name = "";
    cout << "\nEnter the name of a friend.\n";
    cin >> friend_name;
    cout << "\nHave you seen " << friend_name << " recently?\n";
    char friend_sex = 0;
    cout << "\nEnter the sex of the friend.(M/F)";
    cin >> friend_sex;
    if (friend_sex == 'M') {
        cout << "If you have seen " << friend_name 
             << " recently, ask him to call me.";
    }
    if (friend_sex == 'F') {
        cout << "If you have seen " << friend_name 
             << " recently, ask her to call me.";
    }
    int age = 0;
    cout << "\nEnter the age of the recepient: \n";
    cin >> age;
    if (age <= 0 || age >= 110) {
        simple_error("You are kidding!\n");
    } else {
        cout << "I hear you just had a birthday and you are "
             << age << " years old.\n";
    }
    if (age < 12) {
        cout << "\nNext year, you will be " << (age + 1) << "!";
    } else if (age == 17) {
        cout << "\nNext year, you'll be able to vote!";
    } else if (age > 70) {
        cout << "\nI hope you are enjoying retirement.\n";
    }
    cout << "\nYours sincerely, \n\n\t\t\t Name\n";

    return 0;   

}