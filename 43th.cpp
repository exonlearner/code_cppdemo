//c++ program to find the largest elements of an array
#include <iostream>
using namespace std;

class largestnum
{
public:
  int i, n;
  float arr[100];
  void input()
{ 
  cout << "Enter total number of elements(1 to 100): ";
  cin >> n;
  cout << endl;
  for(i = 0; i < n; ++i) {
    cout << "Enter Number " << i + 1 << " : ";
    cin >> arr[i];
  }
  for(i = 1;i < n; ++i) {
    if(arr[0] < arr[i])
      arr[0] = arr[i];
  }

  cout << endl << "Largest element = " << arr[0];

}
};
int main()
{
    largestnum l1;
    l1.input();
    return 0;
}
