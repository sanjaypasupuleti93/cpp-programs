#include <iostream>
using namespace std;

class Student
{
    int marks;

public:
    void getData()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display(Student s)
    {
        cout << "Marks = " << s.marks;
    }
};

int main()
{
    Student s1;

    s1.getData();
    s1.display(s1);

    return 0;
}
