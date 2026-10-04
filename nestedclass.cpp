#include <iostream>
using namespace std;

class outer
{
	public :
		class inner
		{
		 public :
		 void show()
		 {
		 
			cout<<"nested class";
		 }
        };
};
main()
{ 
	outer::inner s;
	s.show();
}
