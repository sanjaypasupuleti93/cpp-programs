#include<iostream>
using namespace std;
class Student
{
    int id;
    string name;

public:
    void getData()
    {
        cin >> id >> name;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s[3];

    cout << "Enter details of 3 students:\n";

    for(int i = 0; i < 3; i++)
    {
        cout << "Student " << i + 1 << ": ";
        s[i].getData();
    }

    cout << "\nStudent Details:\n";

    for(int i = 0; i < 3; i++)
    {
        s[i].display();
        cout << endl;
    }

    return 0;
}
