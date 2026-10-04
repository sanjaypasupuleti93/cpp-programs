
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
main()
{
	student s1,s2,s3;
	cout<<"total objects are "<<student::count;
	
}
