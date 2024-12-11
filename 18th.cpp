//cpp program to reverse the number
#include <iostream>
using namespace std;

class reverseeg
 {
public:
  int n, reversed_number = 0, remainder;
void input()
{ 
  cout << "Enter an integer: ";
  cin >> n;

  while(n != 0) 
  {
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
  }

  cout << "Reversed Number = " << reversed_number;
}
 };
 int main()
 { 
    reverseeg r1;
    r1.input();
    return 0;
}