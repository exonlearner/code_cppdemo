//C++ Program to Concatenate Two Strings
#include <iostream>
#include <string>
using namespace std;

class StringConcatenator {
private:
    string str1;
    string str2;

public:
    // Constructor to initialize the strings
    StringConcatenator(const string& s1, const string& s2) : str1(s1), str2(s2) {}

    // Method to concatenate the strings
    string concatenate() const {
        return str1 + str2;
    }

    // Method to display the concatenated string
    void displayConcatenation() const {
        cout << "Concatenated string: " << concatenate() << endl;
    }
};

int main() {
    string firstString, secondString;

    cout << "Enter the first string: ";
    getline(cin, firstString);

    cout << "Enter the second string: ";
    getline(cin, secondString);

    // Create an object of StringConcatenator with the input strings
    StringConcatenator sc(firstString, secondString);

    // Display the concatenated string
    sc.displayConcatenation();

    return 0;
}