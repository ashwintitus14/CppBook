#include "../std_lib_facilities.h"

int main()
{
    string first_name;
    string friend_name;
    char friend_sex = 0;
    int age = 0;
    
    cout << "Enter name of the person you want to write to: ";
    cin >> first_name;    
    cout << "Enter the name of another friend: ";
    cin >> friend_name;
    cout << "Enter the gender of your friend (m/f): ";
    cin >> friend_sex;
    cout << "Enter the age of the recipient: ";
    cin >> age;


    cout << "Dear " << first_name << ",\n";
    cout << "\tHow are you? I'm fine!\nHow is everything going there? How's work?\n";
    cout << "Have you seen " << friend_name << " lately?\n";
    if (friend_sex == 'm') {
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    }
    if (friend_sex == 'f') {
        cout << "If you see " << friend_name << " please ask her to call me.\n";
    }
    if (age <= 0 || age >= 110) {
        simple_error("You're kidding!");
    }
    cout << "I hear you just had a birthday and you are " << age << " years old.\n";
}