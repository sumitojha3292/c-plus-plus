/* CPP for defining  Friend Operator overloading using insertion operator(<<). 
In this method Complex number is displayed using insertion operator.
must watch a video of abdul bari's insertion operator overloading.
 */ 

#include <stdio.h>
#include <iostream>

using namespace std;

struct Complex
{

 int real;
 int img;
 public:
 // parameterized constructor
 Complex(int r=0,int i=0)
 {
	 real=r;
	 img=i;
 }

 //facilitator 
 friend Complex operator+(Complex C1,Complex C2);
 friend Complex operator-(Complex C1,Complex C2);
 friend ostream & operator<<(ostream &out, Complex &C);


};

int main()
{
 Complex C1(12,5),C2(7,10),C3,C4;
 C3=C1+C2;
 C4=C1-C2;
 cout<<C3;
 cout<<C4;
	
  return 0;
  
}

 Complex operator+(Complex C1,Complex C2)
 {
	 Complex temp;
	 temp.real=C1.real+C2.real;
	 temp.img=C1.img+C2.img;
	 return temp;
 } 
 
 Complex operator-(Complex C1,Complex C2)
 {
	 Complex temp;
	 temp.real=abs(C1.real-C2.real);
	 temp.img=abs(C1.img-C2.img);
	 return temp;
 }


ostream & operator<<(ostream &out, Complex &C)
{
	cout<<C.real<<"+i"<<C.img<<endl;
	
	return out;
}


