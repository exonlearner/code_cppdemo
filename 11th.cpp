//c++ program to find the sum of natural number
#include<iostream>
using namespace std;

class NaturalNumberSum
 {
private:
    int n;

public:
    NaturalNumberSum(int num) : n(num) {}
    int calculateSum()
     {
        return (n * (n + 1)) / 2; // Using the formula for the sum of first n natural numbers
    }
    void displaySum() {
        int sum = calculateSum();
        cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
    }
};
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n <= 0) 
    {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    NaturalNumberSum sumCalculator(n);
    sumCalculator.displaySum();

    return 0;
}