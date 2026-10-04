//constructors & Destructors 
#include<iostream>
using namespace std;
class Book
{
	int bid ;
	string bname;
    Book()
    {
    	cout<<"defalut";
	}
	Book(int id ,string name )
	{
		bid=id;
		bname=name;
		cout<<"book id "<<bid<"book name"<<bname<<endl;
	}
	Book(Book &b)
	{
	b.bid=id;
	b.bname=name;
	cout<<"book id "<<bid<"book name"<<bname<<endl;
	}
	~Book()
	{
		cout <<"Destructors :";
	}
};
int main()
{
	Book.b1();
	cout<<"end";
	return 0;
}
	
	

