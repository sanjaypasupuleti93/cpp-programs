//quadratic equation program
#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int a,b,c,d,r1,r2,end1;
	cout<<"enter a,b and c values:";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	r1=(-b+sqrt(d))/(2*a);
	r2=(-b-sqrt(d))/(2*a);
	if(d>0)
    {
    cout<<"roots are real"<<end1;
    cout<<"root 1 is "<<r1<<end1;
    cout<<"root 2 is "<<r2<<end1;	
	} 
	else if(d==0)
	{
		cout<<"roots are equal:"<<end1;
		r1=-b/(2*a);
		cout<<"root is "<<r1<<end1;
	}
	else
	{
		cout<<"roots are imaginary ";
		
	}
}
	
