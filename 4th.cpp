//cpp program to find quotient and remainder;
#include<iostream>
using namespace std;

class calculator
{
    int divident,divisor,quotient,remainder;

    public:
    void input()
    {
        cout<<"enter the divident:";
        cin>>divident;
        cout<<"enter the deivisor:";
        cin>>divisor;
    }
    void output()
    {
        cout<<"quotient while dividing "<< divident<< " by" << divisor << "is= " <<divident/divisor<<endl;
        cout<<"remainder while dividing "<< divident <<" by"<< divisor << "is= " <<divident % divisor;
    }
};
int main()
{
    calculator c;
    c.input();
    c.output();
    return 0;
}