//c++ to find the gcd
#include <iostream>
using namespace std;

class findgcd
 {
    public:
  int n1, n2, hcf;
  void input()
  { 
  cout << "Enter two numbers: ";
  cin >> n1 >> n2;

  // swapping variables n1 and n2 if n2 is greater than n1.
  if ( n2 > n1)
   {   
    int temp = n2;
    n2 = n1;
    n1 = temp;
  }
    
  for (int i = 1; i <=  n2; ++i) {
    if (n1 % i == 0 && n2 % i ==0) {
      hcf = i;
    }
  }

  cout << "HCF = " << hcf;
  }
  };
  int main()
  { 
    findgcd g1;
    g1.input();
    return 0;
}