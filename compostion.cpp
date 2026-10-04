#include<iostream>
using namespace std;
class Engine
{
	public:
		void start()
		{
			cout<<"car started"<<endl;
		}
};
class Car 
{
	public:
		Engine e;  // compostion : has -a relationship
		void run()
		{
			e.start();
			cout<<" moving a car"<<endl;
			
			
		}
};

main()
{
	Car c ;
	c.run();
}
