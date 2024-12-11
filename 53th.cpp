//C++ Program to Remove all Characters in a String Except Alphabets
#include <iostream>
#include <cctype> // for isalpha
using namespace std;

class StringFilter {
public:
    // Function to remove non-alphabet characters
    string removeNonAlphabets(const string& str) {
        string result;
        for (char ch : str) {
            if (isalpha(ch)) {
                result += ch;
            }
        }
        return result;
    }
};

int main() {
    StringFilter filter;
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    string filteredString = filter.removeNonAlphabets(input);
    cout << "String with only alphabets: " << filteredString << endl;

    return 0;
}