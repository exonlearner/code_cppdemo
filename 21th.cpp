//c++ program to find the ASCII value 
#include <iostream>
using namespace std;

class ascllw
 {
    public:
    char c;
    void input()
    { 
 cout << "Enter a character: ";
 cin >> c;
 cout << "ASCII Value of " << c << " is " << int(c);
    }
 };
 int main()
 { 
    ascllw a1;
    a1.input();
 return 0;
}