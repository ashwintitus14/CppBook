#include "../std_lib_facilities.h"

int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    if (s1 < s2){
        cout << "s1 is alphabetically before s2\n";
    }
    if (s1 > s2){
        cout << "s1 is alphabetically after s2\n";
    }
    if (s1 == s2){
        cout << "s1 is the same as s2\n";
    }
}