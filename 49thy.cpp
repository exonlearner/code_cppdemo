//c++ program to access elements of an array by using pointer
#include <iostream>
using namespace std;

class arrpoint
{
    public:
    int data[5];
    void input()
    { 
   cout << "Enter elements: ";

   for(int i = 0; i < 5; ++i)
      cin >> data[i];

   cout << "You entered: ";
   for(int i = 0; i < 5; ++i)
      cout << endl << *(data + i);
    }
};
int main()
{ 
    arrpoint ap;
    ap.input();
    return 0;
}