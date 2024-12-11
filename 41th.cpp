//c++ program to calculate the power using recursion
#include <iostream>
using namespace std;

int calculatePower(int, int);
class power
{
    public:
    int base, powerRaised, result;
    void input()
{ 
    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power number(positive integer): ";
    cin >> powerRaised;

    result = calculatePower(base, powerRaised);
    cout << base << "^" << powerRaised << " = " << result;
}
int calculatePower(int base, int powerRaised)
{
    if (powerRaised != 0)
        return (base*calculatePower(base, powerRaised-1));
    else
        return 1;
}
};
int main()
{
power p3;
p3.input();
return 0;
}