//C++ Program to Add Two Distances (in inch-feet) System Using Structures
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    // Constructor to initialize the distance
    Distance(int f = 0, int i = 0) : feet(f), inches(i) {}

    // Method to set distance
    void setDistance(int f, int i) {
        feet = f;
        inches = i;
    }

    // Method to display the distance
    void displayDistance() const {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    // Method to add two distances
    Distance addDistances(const Distance& d) const {
        int totalFeet = feet + d.feet;
        int totalInches = inches + d.inches;

        // Convert total inches to feet if 12 or more inches
        if (totalInches >= 12) {
            totalFeet += totalInches / 12;
            totalInches %= 12;
        }

        return Distance(totalFeet, totalInches);
    }
};

int main() {
    Distance d1, d2, d3;

    int feet, inches;

    // Input first distance
    cout << "Enter the first distance:" << endl;
    cout << "Feet: ";
    cin >> feet;
    cout << "Inches: ";
    cin >> inches;
    d1.setDistance(feet, inches);

    // Input second distance
    cout << "Enter the second distance:" << endl;
    cout << "Feet: ";
    cin >> feet;
    cout << "Inches: ";
    cin >> inches;
    d2.setDistance(feet, inches);

    // Add the two distances
    d3 = d1.addDistances(d2);

    // Display the distances
    cout << "First Distance: ";
    d1.displayDistance();
    cout << "Second Distance: ";
    d2.displayDistance();
    cout << "Total Distance: ";
    d3.displayDistance();

    return 0;
}