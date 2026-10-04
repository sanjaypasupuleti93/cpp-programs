//scope resolution operator & namespace
#include<iostream>
using namespace std;
int x=10;
namespace demo 
{
	int x=100;
}
main()
{
	int x=20;
	cout<<"global variable is:" <<::x<<endl;
    cout<<"local varable is:" <<x<<endl;
	cout<<"namespace varable valyse is:" <<demo::x;

}
