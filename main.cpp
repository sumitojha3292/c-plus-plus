/*CPP for returning multiple values from function using tuple*/ 

#include <stdio.h>
#include <iostream>
#include<tuple>


using namespace std;

tuple<string,int,int> info(void)
{
	return make_tuple("Sumit",28,85);
}

int main()
{
	/*****defining a Tuple****************/
     tuple<string,int,int> t1;
	 t1=info();
	
	/**********Display*****************/
     cout<<"name of student: "<<get<0>(t1)<<endl;
	 cout<<"age: "<<get<1>(t1)<<endl;
	 cout<<"marks: "<<get<2>(t1)<<endl;
	

   return 0;
}
