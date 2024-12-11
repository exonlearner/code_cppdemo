//cpp program to check whether the number is even or odd.
#include<iostream>
using namespace std;

class oddeven
{
    int num;

     public:
     void input()
     {
        cout<<"enter a number:";
        cin >> num;
     }
     void output()
     {
        if (num % 2 ==0)
        {
            cout<<"the number"<< num<<" is a even number";
        }
        else
        {
           cout<<"the number "<<num<< " is a odd number";
        }
     }
};
int main()
{
    oddeven o;
    o.input();
    o.output();
    return 0;
}