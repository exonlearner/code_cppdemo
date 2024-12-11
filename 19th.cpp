//c++ program to find the power
#include <iostream>
using namespace std;

class powereg 
{
    public:
    int num;
    float base, result = 1;
void input()
{ 
    cout << "Enter base and num respectively:  ";
    cin >> base >> num;

    cout << base << "^" << num << " = ";

    while (num != 0) {
        result *= base;
        --num;
    }

    cout << result;
}
};
   int main()
 { 
    powereg p1;
    p1.input(); 
    return 0;
}