#include "../std_lib_facilities.h"

int main()
{
    cout << "Please enter your first name and age: ";
    string first_name;
    cin >> first_name;
    double age = -1;
    cin >> age;
    double age_in_months = age * 12;
    cout << "Hello " << first_name << " (age: " << age_in_months << " months)\n";
    return 0;
}