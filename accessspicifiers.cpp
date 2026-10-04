//access specifiers 
#include<iostream>
using namespace std;
class car
{
	protected:
		string brand;
};
class vehicle: public car
{
	public:
		void display(string b)
		{
			brand=b;
		}
};
main()
{
	vehicle v;
	v.display("bmw");
	cout<<"code compiled";
}  


