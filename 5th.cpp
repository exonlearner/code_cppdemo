//cpp program to find size of int ,float , double , char in your system
#include<iostream>
using namespace std;

class systemeg
{
    public:
    void input()
{
    cout<<"size of int:"<<sizeof(int)<<"bytes"<<endl;
    cout<<"size of float:"<<sizeof(float)<<"bytes"<<endl;
    cout<<"size of char:"<<sizeof(char)<<"byte"<<endl;
    cout<<"size of double:"<<sizeof (double)<<"bytes"<<endl;
}
};
int main()
{
    systemeg s2;
    s2.input();
    return 0;
}