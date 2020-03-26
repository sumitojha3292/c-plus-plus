/* Funtion pointer problem for addition and multiplication */ 

#include <stdio.h>
#include <iostream>
using namespace std;

int add(int a,int b)
{
	return a+b;
}

int mul(int a, int b)
{
	return a*b;
}

int main()
{
 int result=0;
 int (*fun)(int,int);
 fun=add;
 result=(*fun)(10,5);
 cout<<"Addition= "<<result<<endl;
 fun=mul;
 result=(*fun)(10,5);
 cout<<"Multiplication= "<<result<<endl;
	

    return 0;
}
