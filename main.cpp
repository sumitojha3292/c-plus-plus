/*CPP for using STL map class. 
1-STL contains a collection of classes that provide templated classes like:-
  1.1-Algorithms- There are built in functions and algorithms for managing and performing operations on containers.
  1.2-Containers- Array,linked list,stack,queues etc has built in classes is called containers.
  1.3-Iterators - this is used to access the values of container class.

2-Algorithms- search(),sort(),binary_search(),reverse(),concat(),copy(),union(),intersection(),merge(),heap().

3) Containers- 
    3.1) Vector- This is array only which can grow and reduce by itself only. it has some functions like
	             push_back() which insert element at back,pop_back() for deleting element 
				 from back,insert(),remove(),size(),empty(). in this method opeartions from front is not allowed.
	3.2) list-   This class is for doubly linked list. it has same functions like in vectors but additionally
              	 it has functions like push_front(),pop_front(),front(),back(),
	3.3) forward_list- This class is for singley linked list. same function of list is used in this container. 
	3.4) deque- It means double ended queue. it is same like vector. it is also having same set of functions like list.
	            In this method opeartions from front is allowed unlike vectors.
	3.5) priority_queue- It is used for maximum heap data structure. in this method always largest value of element
                         will be deleted from queue.it has functions sets like push(),pop(),size(),empty().
	3.6) stack- It works on LIFO principle. it has same set of functions like priority_queue.
	3.7) set- it will always contain unique elements,duplicate elements are not allowed. it will not maintain the orders.
	3.8) multiset- it is same as set but allows duplicate values.
	3.9) map- it is used for storing key and value pair but keys should be unique.it uses hash table.
	3.9) multi map- it is used for storing key and value pair but keys can be duplicate but key-value pair should be unique.
*/ 

#include <stdio.h>
#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<int,string> m;
	m.insert(pair<int,string>(1,"sumit"));
	m.insert(pair<int,string>(2,"amit"));
	m.insert(pair<int,string>(3,"rishi"));
	m.insert(pair<int,string>(4,"papa"));
	cout<<"using iterator and for loop:"<<endl;
	
	map<int,string>::iterator itr; // creating object of iterator class for vector class
	for(itr=m.begin();itr!=m.end();itr++)
	{
		//cout<<++*itr<<endl; // we can not modify the values in the set. we can only display it. 
		cout<<itr->first<<" "<<itr->second<<endl;
	}
	
	map<int,string>::iterator itr1;
	itr1=m.find(3);
	cout<<"value found:"<<endl;
	cout<<itr1->first<<" "<<itr1->second<<endl;
	
   return 0;
}
