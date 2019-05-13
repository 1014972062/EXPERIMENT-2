#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
	int z;
	int x;
	int c;
	z=0;
	x=1;
	c=0;
	cout <<"Fibonacci Sequence Starts....\n";
while (c<=10)
{
		cout <<z<<","<<x;
		if(c<10)
		cout<<",";
		z=z+x;
		x=z+x;
		c++;
}
	
	_getch();
	return 0;
}
