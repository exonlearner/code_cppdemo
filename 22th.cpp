//c++ program to multiply the two number
#include <iostream>
using namespace std;

class multiplytwonum
{ 
public:
  double num1, num2, product;
  void input()
  { 
  cout << "Enter two numbers: ";

  // stores two floating point numbers in num1 and num2 respectively
  cin >> num1 >> num2;
 
  // performs multiplication and stores the result in product variable
  product = num1 * num2;  

  cout << "Product = " << product;  
  }
  };  
    int main()
 { 
multiplytwonum m1;
m1.input();
  return 0;
}