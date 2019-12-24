#include "../std_lib_facilities.h"

int main()
{
    string current;
    int wordcount = 0;
    string prev = "";
    while (cin >> current) {
        ++wordcount;
        if (current == prev) {
            cout << "Repeated word: " << current << " Position of word in sentence: " << wordcount << "\n";
        }
        prev = current;
    }
    return 0;
}