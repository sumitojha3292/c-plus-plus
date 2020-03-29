/* CPP for default function argument */ 

#include <stdio.h>
#include <iostream>

using namespace std;

int maxim(int a=0, int b=0, int c=0)
{
	return a>b && a>c ? a:(b>c && b>a ?b: c);
}


int main()
{
	cout<<"maximum_1= "<<maxim()<<endl;
	cout<<"maximum_2= "<<maxim(3,6,1)<<endl;
	cout<<"maximum_3= "<<maxim(4,9)<<endl;
	cout<<"maximum_4= "<<maxim(0,0,3)<<endl;
	
  return 0;
}
