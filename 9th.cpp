//cpp program to find the largest among three numbers
#include <iostream>
using namespace std;

class LargestNumber {
private:
    int num1, num2, num3;
public:
    LargestNumber(int a, int b, int c) : num1(a), num2(b), num3(c) {}
    int findLargest() {
        if (num1 >= num2 && num1 >= num3)
            return num1;
        else if (num2 >= num1 && num2 >= num3)
            return num2;
        else
            return num3;
    }
    void displayLargest() {
        int largest = findLargest();
        cout << "The largest number among " << num1 << ", " << num2 << ", and " << num3 << " is: " << largest << endl;
    }
};

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    LargestNumber ln(a, b, c);
    ln.displayLargest();

    return 0;
}
