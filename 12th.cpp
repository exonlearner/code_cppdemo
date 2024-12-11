//c++ to check the leap year
#include <iostream>
using namespace std;

class leapyear
{
 public:
  int year;

void input()
{ 
  cout << "Enter a year: ";
  cin >> year;
}
  void display()
  { 
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
  {
    cout << year << " is a leap year.";
  }
  else {
    cout << year << " is not a leap year.";
  }
  }
};
int main()
{
    leapyear l1;
    l1.input();
    l1.display();
    return 0;   
}
  
