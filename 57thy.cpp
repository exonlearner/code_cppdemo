//C++ Program to Sort Elements in Lexicographical Order (Dictionary Order)
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class LexicographicalSorter {
private:
    vector<string> elements;

public:
    // Constructor to initialize the elements
    LexicographicalSorter(const vector<string>& elems) : elements(elems) {}

    // Method to sort the elements in lexicographical order
    void sortElements() {
        sort(elements.begin(), elements.end());
    }

    // Method to display the sorted elements
    void displaySortedElements() const {
        cout << "Elements in lexicographical order:" << endl;
        for (const auto& element : elements) {
            cout << element << endl;
        }
    }
};

int main() {
    vector<string> elements;
    string input;
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;
    cin.ignore(); // To ignore the newline character after reading n

    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; ++i) {
        getline(cin, input);
        elements.push_back(input);
    }

    // Create an object of LexicographicalSorter with the input elements
    LexicographicalSorter sorter(elements);

    // Sort the elements
    sorter.sortElements();

    // Display the sorted elements
    sorter.displaySortedElements();

    return 0;
}