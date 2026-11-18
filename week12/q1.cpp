
#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    int marks;

public:
    // Default constructor
    Student()
    {
        rollNo = 1;
        marks = 90;
    }

    // Member function to display values
    void display()
    {
        cout << "Roll Number = " << rollNo << endl;
        cout << "Marks = " << marks << endl;
    }
};

int main()
{
    Student s;

    s.display();

    return 0;
}

