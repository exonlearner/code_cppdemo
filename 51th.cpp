//C++ Program to Find the Frequency of Characters in a String
#include <iostream>
using namespace std;

class frequency
{
    public:
        void input()
        { 
    string str = "C++ Programming is awesome";
    char checkCharacter = 'a';
    int count = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] ==  checkCharacter)
        {
            ++ count;
        }
    }

    cout << "Number of " << checkCharacter << " = " << count;
    }
};
int main()
{ 
  frequency f1;
  f1.input();
  return 0;
}

