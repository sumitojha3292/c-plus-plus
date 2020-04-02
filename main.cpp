/* CPP for defining Operator overloading. 
  we can use several operator like (+,-,*,(),++,--,new,delete).
 */ 

#include <stdio.h>
#include <iostream>

using namespace std;

struct Complex
{
 public:
 int real;
 int img;

 Complex operator+(Complex C)
 {
	 Complex temp;
	 temp.real=real+C.real;
	 temp.img=img+C.img;
	 return temp;
 } 
 
 Complex operator-(Complex C)
 {
	 Complex temp;
	 temp.real=abs(real-C.real);
	 temp.img=abs(img-C.img);
	 return temp;
 }

};

int main()
{
 Complex C1,C2,C3,C4;
 C1.real=10;C1.img=5;
 C2.real=4;C2.img=8; 
 C3=C1+C2;
 C4=C1-C2;
 cout<<"C3= "<<C3.real<<" +i"<<C3.img<<endl;
 cout<<"C4= "<<C4.real<<" +i"<<C4.img<<endl;
	
  return 0;
  
}



