/*Write a Program to demonstrate constructor and destructor call in different scope of a program*/

#include<iostream>
	
	using namespace std;
	     int count =0;
		class abc
		 {
		   public:
		     abc() //Constructor Defined
		      {
		       count++;
		       cout<<"\n Object "<<count<< " created";
		       }
		       
		      ~abc() //Destructor
		      {
		      	cout<<"\n Object "<<count<< " destroyed";
		      	count --;
		      }
		     
		     
		  };
		  
		 int main()
		 {
		 cout<<"\n First object created";
		 abc a1;
		 
		 	{
		 	cout<<"\n Two objects being created in different scope";
		 	abc a2,a3;
		 	cout<<"\n Leaving this scope";
		 	
		 	}
		 cout<<"\nMain Scope";
		 	return 0;
		}
