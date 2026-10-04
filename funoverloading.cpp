#include<iostream>
using namespace std;

class Demo
{
public:
    void display()
    {
        cout << "No arguments" << endl;
    }

    void display(int a)
    {
        cout << "One integer: " << a << endl;
    }
};

int main()
{
    Demo d;
    d.display();
    d.display(10);

    return 0;
}
