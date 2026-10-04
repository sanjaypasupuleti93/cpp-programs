//static member variable
/*
#include<iostream>
using namespace std;
class student
{
   public:
   static int count;
   student()
   {
   	count++;
   }	
};
int student::count=0;
int main()
{
	student s1;
	student s2;
	student s3;
	cout << "Number of students: " << student::count << endl;

	return 0;
}
*/
//static member function
/*
#include <iostream>
using namespace std;

class Student
{
public:
    static void display()
    {
        cout << "This is a static member function" << endl;
    }
};

int main()
{
    Student::display();

    return 0;
}
*/

#include<iostream>
using namespace std;
class student
{
	public:
    static int count;
	static void showcount()
	{
		cout<<"count="<<count<<endl;
	}
};
int student::count=10;
int main()
{
	student::showcount();
	return 0;
}


