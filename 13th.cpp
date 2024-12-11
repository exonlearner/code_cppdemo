//c++ program to find the factorial
#include <iostream>
using namespace std;

class factorialp
 {
    public:
    int n;
    long factorial = 1.0;
void input()
{ 
    cout << "Enter a positive integer: ";
    cin >> n;
}
void display()
{ 
    if (n < 0)
    { 
        cout << "Error! Factorial of a negative number doesn't exist.";}
    else
     {
        for(int i = 1; i <= n; ++i)
         
            factorial *= i;
        
    }
        cout << "Factorial of " << n << " = " << factorial;    
    }
 };
    int main()
{ 
    factorialp f1;
    f1.input();
    f1.display();
    return 0;
}
    

