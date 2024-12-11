//c++ program to swap two number
#include<iostream>
using namespace std;

class swatem
{
    public:
    int a=5 ,b=8,temp;
    void input()
    { 
    cout<<"before swaping:";
    cout<<"a="<<a<<",b=" <<b<< endl;
    }
void swapnumber()
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void display()
{ 
    cout<<"after swaping:";
    cout<<"a= "<<a<< ",b= "<<b<<endl;
}
};
int main()
{
    swatem s;
    s.input();
    s.swapnumber();
    s.display();
    return 0;
}