//6.Create a class Rectangle with a constructor that takes two parameters and displays area.
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, width;

public:
    // Parameterized constructor
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    void displayArea()
    {
        int area = length * width;
        cout << "Area of Rectangle = " << area << endl;
    }
};

int main()
{
    Rectangle r(10, 5);

    r.displayArea();

    return 0;
}

/*
Explanation
Rectangle(int l, int w) is a parameterized constructor.
10 and 5 are passed when the object r is created.
length = 10 and width = 5.
displayArea() calculates and displays the area.
*/
