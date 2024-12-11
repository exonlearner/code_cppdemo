//c++ program to print the multiplication table
#include <iostream>
using namespace std;

class multiplicationtable
 {
public:
    int n;
    void input()
{ 
    cout << "Enter a positive integer: ";
    cin >> n;

    // run a loop from 1 to 10
    // print the multiplication table
    for (int i = 1; i <= 10; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}
 };
    int main()
   {
multiplicationtable m1;
m1.input();
return 0;
   }
    
