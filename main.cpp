/*CPP for c++11 feature smart pointers.
1- Smart pointers that automatically manage memory and they will deallocate the object when they
   are not in use when the pointer is going out of scope automatically it will deallocate the memory.
2- There are 3 types of smart pointers:-
   2.1- Unique pointer:- Only one pointer P1 can point to an object at a time.So we can’t share with another pointer, 
        but we can transfer the control to P2 by removing P1.
		syntax:- unique_ptr<data_type> pointer_name(new class);
   2.2- Shared pointer:- If you are using shared_ptr then more than one pointer can point to this one object at a time
        and it’ll maintain a Reference Counter using use_count() method. Reference counter is 2 if P1 and P2 both pointing to same object. 
   2.3- Weak pointer:- It is always created from a shared pointer.It’s much more similar to shared_ptr except it’ll not maintain a Reference Counter.In this case, 
        a pointer will not have a strong hold on the object. The reason is if suppose pointers are holding the object and 
		requesting for other objects then they may form a Deadlock.
*/             

#include <stdio.h>
#include <iostream>
#include <memory>
using namespace std;

class rectangle
{
	private:
	int length;
	int breadth;
	
	public:
	rectangle(int l,int b)
	{
		length=l;
		breadth=b;
	}
	
	int area()
	{
		return length*breadth;
	}
	
};

int main()
{ 
  /************1- unique pointer****************************/
   unique_ptr<rectangle> P1(new rectangle(10,20));
   cout<<"1-Area: "<<P1->area()<<endl;
   unique_ptr<rectangle> P2;
   
 /*   P2=P1;                               // it will cause error bcz object can’t be shared in unique pointer
   cout<<"Area: "<<P2->area()<<endl; */    

    P2=move(P1);             // P2 will be pointing on same object and P1 is removed 
	cout<<"2-Area: "<<P2->area()<<endl; 
	//cout<<"1-Area: "<<P1->area()<<endl; // this will cause error bcz P1 is removed from that object
	
  /***********2- Shared pointer******************************/
   shared_ptr<rectangle> P3(new rectangle(5,10));
   shared_ptr<rectangle> P4;
   P4=P3;
   cout<<"P3 Area: "<<P3->area()<<endl;
   cout<<"P4 Area: "<<P4->area()<<endl;
   cout<<"shared Reference count: "<<P3.use_count()<<endl;   
   
   
   /***********3- Weak pointer******************************/
   weak_ptr<rectangle> P5;
   P5=P4;
   
   cout<<"P5 Area: "<<P5.lock()->area()<<endl;
	 
  return 0;
}
