//complete the program below
//its a program to find the average value.
//HAIQAL ADAM
//A17DW0071
#include <iostream>
using namespace std;
double avg(double x,double y);
int main()
{
	double x=0.0;
	double y=0.0;
	avg(x,y);
	cout<<"Enter first number"<<endl;
	cin>>x;
	cout<<"Enter second number"<<endl;
	cin>>y;
	std::cin.get();

	cout<<"Average is: "<<avg<<endl;
	
	
	
}

double avg(double x,double y)
{
	int result;
	
	result=x+y/2;
	return result;

	
}

//updated
//signed by haiqal
