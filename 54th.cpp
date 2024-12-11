//c++ program to find the length of a string
#include <iostream>
using namespace std;

class StringLength {
public:
    // Function to find the length of the string
    int getLength(const string& str) {
        int length = 0;
        for (char ch : str) {
            length++;
        }
        return length;
    }
};

int main() {
    StringLength stringLength;
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    int length = stringLength.getLength(input);
    cout << "Length of the string: " << length << endl;

    return 0;
}