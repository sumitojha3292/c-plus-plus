/*CPP for using IO streams and writing in a file.
1-For writing in a file there is a class available called 'ofstream'.
2-There are two modes for writing:-
  2.1- Truncate mode- It is also a default mode in which content is deleted and fresh content is over written.
       syntax- ofstream ofs("file name",ios::trunc)
	           ofs<<"hello"<<endl; // for writing hello
  2.2- Append mode- it is used for appending content in a file which has already some content.
       syntax- ofstream ofs("file name",ios::app)  
               ofs<<"hello"<<endl; // for writing hello

*/             

#include <stdio.h>
#include <iostream>
#include <fstream>  // Including for file input output stream
using namespace std;


int main()
{  
    ofstream ofs("my_cpp.txt",ios::app);  // file is created
	ofs<<"hello"<<endl;
	ofs<<"sumit"<<endl;
	ofs.close();         // file is closed
    return 0;
}
