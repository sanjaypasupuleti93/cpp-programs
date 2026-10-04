#include<iostream>
using namespace std;
class Complex
{
	public:
		int real;
		int imag;
		// constructor
		Complex(int r=0,int i=0)
		{
			real=r;
			imag=i;
		}
		//Operator overloading
		Complex operator+(Complex c)
		{
			Complex temp;
			temp.real=real+c.real;
			temp.imag=imag+c.imag;
			return temp;
		}
		void display()
		{
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
		
};
int main()
{
	Complex c1(5,3);
	Complex c2(2,4);
	Complex c3;
	c3=c2+c1;
	cout<<"first complex number: ";
	c1.display();
	cout<<"second complex number: ";
	c2.display();
	cout<<"sum : ";
	c3.display();
	return 0;
}


	
 
