//c++ program to calculate standard deviation
#include <iostream>
#include <cmath>
using namespace std;

float calculateSD(float data[]);

class standarddevi
 {
    public:
  int i;
  float data[10];
void input()
{ 
  cout << "Enter 10 elements: ";
  for(i = 0; i < 10; ++i) {
    cin >> data[i];
  }
  cout << endl << "Standard Deviation = " << calculateSD(data);
}

float calculateSD(float data[]) {
  float sum = 0.0, mean, standardDeviation = 0.0;
  int i;
  for(i = 0; i < 10; ++i) {
    sum += data[i];
  }
  mean = sum / 10;
  for(i = 0; i < 10; ++i) {
    standardDeviation += pow(data[i] - mean, 2);
  }
  return sqrt(standardDeviation / 10);
}
 };
 int main()
 {
standarddevi sd1;
sd1.input();
return 0;
 }
