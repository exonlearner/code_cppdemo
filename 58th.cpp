//58. C++ Program to Store Information of a Student in a Structure
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;
    int rollNumber;
    string course;

public:
    // Constructor to initialize student information
    Student(const string& n, int a, int r, const string& c) 
        : name(n), age(a), rollNumber(r), course(c) {}

    // Method to set student information
    void setInfo(const string& n, int a, int r, const string& c) {
        name = n;
        age = a;
        rollNumber = r;
        course = c;
    }

    // Method to display student information
    void displayInfo() const {
        cout << "Student Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    string name;
    int age;
    int rollNumber;
    string course;

    // Input student information
    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter student age: ";
    cin >> age;
    cout << "Enter student roll number: ";
    cin >> rollNumber;
    cin.ignore(); // To ignore the newline character after reading roll number
    cout << "Enter student course: ";
    getline(cin, course);

    // Create an object of Student with the input information
    Student student(name, age, rollNumber, course);

    // Display the student information
    student.displayInfo();

    return 0;
}