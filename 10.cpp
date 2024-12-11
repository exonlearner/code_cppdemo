#include <iostream>
#include <cmath>
using namespace std;

class QuadraticEquation {
private:
    double a, b, c;

public:
    QuadraticEquation(double coefA, double coefB, double coefC) : a(coefA), b(coefB), c(coefC) {}
    void findRoots() {
        double discriminant = b * b - 4 * a * c;
        double sqrtDiscriminant = sqrt(abs(discriminant));

        if (discriminant > 0) {
            double root1 = (-b + sqrtDiscriminant) / (2 * a);
            double root2 = (-b - sqrtDiscriminant) / (2 * a);
            cout << "The roots are real and distinct:" << endl;
            cout << "Root 1: " << root1 << endl;
            cout << "Root 2: " << root2 << endl;
        } else if (discriminant == 0) {
            double root = -b / (2 * a);
            cout << "The root is real and repeated:" << endl;
            cout << "Root: " << root << endl;
        } else {
            double realPart = -b / (2 * a);
            double imaginaryPart = sqrtDiscriminant / (2 * a);
            cout << "The roots are complex and distinct:" << endl;
            cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
            cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
        }
    }
};

int main() {
    double a, b, c;

    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "The value of 'a' must be non-zero for a quadratic equation." << endl;
        return 1;
    }

    QuadraticEquation equation(a, b, c);
    equation.findRoots();

    return 0;
}