/* CPP for defining  Friend Operator overloading. 
  In this method function body is defined outside of class but by using friend 
  operator scope resolution is not required.
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


};

int main()
{
 Complex C1(12,5),C2(7,10),C3,C4;
 C3=C1+C2;
 C4=C1-C2;
 cout<<"C3= "<<C3.real<<" +i"<<C3.img<<endl;
 cout<<"C4= "<<C4.real<<" +i"<<C4.img<<endl;
	
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



