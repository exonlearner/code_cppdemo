//c++ program to calculate the average of numbers using arrays
#include <iostream>
using namespace std;

class averagenum
{
    public:
    int n, i;
    float num[100], sum=0.0, average;
void input()
{ 
    cout << "Enter the numbers of data: ";
    cin >> n;

    while (n > 100 || n <= 0)
    {
        cout << "Error! number should in range of (1 to 100)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }

    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    cout << "Average = " << average;
}
};
int main()
{ 
    averagenum a1;
    a1.input();
    return 0;
}