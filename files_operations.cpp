#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	ofstream fout("data.txt");
	fout<<"hello sanjay"<<endl;
	fout<<2026<<endl;
	fout.close();
	
	ifstream fin("data.txt");
	string line;
	while (getline(fin,line))
	cout<<line<<endl;
	fin.close();
	return 0;
}
