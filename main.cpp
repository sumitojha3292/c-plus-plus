/*CPP for c++11 feature lamda expression.
1- lamda expression allows us to define an anonymous(undefined) function inside another function.
2- defination is:- [capture_list][parameter_list]->return_type{body;}
3- must see abdul bari's video for it.
*/             

#include <stdio.h>
#include <iostream>
using namespace std;

template<typename T>

void increment(T ptr)
{
	ptr();
}

int main()
{ 
 //1- lamda expression for printing hello
 [](){cout<<"1-hello"<<endl;}(); //no capture, parameter list and no return type.
 
 //2- Sum of two numbers
  [](int x,int y){cout<<"2-sum: "<<x+y<<endl;}(5,12); // having parameter list
  
 //3- Returning the result
 auto result=0.0;
 result=[](auto x=0.0,auto y=0.0){return x*y;}(2.3,3.7); // c++ supports auto type so it is ok if we didn't declare any return type 
 cout<<"3-Result= "<<result<<endl;
 
 //4- Returning the result
 int sum=[](int x,int y)->int{cout<<"4-sum: "<<x+y<<endl;}(5,6);  // having a return type
 
 //5- Assigning reference to pointer
 auto fun_ptr=[](int x,int y){cout<<"5-calculation through pointer:"<<endl<<"sum: "<<x+y<<endl;}; // fun_ptr is auto type and after \
                                                                          assigning the reference it become pointer.
																		  
  fun_ptr(9,5);
  
  int p=4;
  auto ptr=[&p](){cout<<"Through template: "<<++p<<endl;};   
  increment(ptr);
  
  // 6- Acessing local variables of a function
  int a=6;
  int b=10;
  [a,b](){cout<<"6- "<<a<<" "<<b<<endl;}();  // displaying the variable a and b
  
  [&a,&b](){cout<<"7- "<<++a<<" "<<++b<<endl;}();  // for modifing the variable use reference
  
  [&](){cout<<"8- "<<++a<<" "<<++b<<endl;}();  // by just writing the reference we can access all the value in that local function
  
  
  return 0;
}
