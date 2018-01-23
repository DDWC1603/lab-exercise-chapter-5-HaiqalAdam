//finish up this program.thanks.
//the output will be something like a wave that is from this "+"
//complete and fix the program below.
//HAIQAL ADAM
//A17DW0071
#include <iostream>
#include <iomanip>

using namespace std;

void ombakOmbak(int repeat=3,int height=5,int up=2,int down=2)
{
	int i;
	
	while(repeat >0)
	{
		for(i = 0; i <=up; i++)
		cout<<setw(height)<<right<<"+"<<endl;
		for(i = 0; i <=down; i++)
		cout<<"+"<<endl;
		repeat --;
	}
}



void OmbakKeluar()
{

	cout<<"\nwaveDemo\n";
	ombakOmbak();
}


//updated
//signed by haiqal
