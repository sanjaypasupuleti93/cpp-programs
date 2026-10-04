#include<iostream>
#include<cmath>
using namespace std;
int fact (int);
int fact (int num)
{
	if(num==0||num==1)
	{
		return 1;
	}
	else
	{
		return num*fact(num-1);
	}
}
main()
{
	int n;
	cout<<"enter n value: ";
	cin>>n;
	cout<<"factorial of "<<n<<" is : "<< fact(n);
}

	

