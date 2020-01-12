//Create a class and take single input

#include<iostream>
using namespace std;
	
class stu
	{	private:
		int roll;
		char name[40];
	
		public:
		void get()
			{
				cout<<"NAME: ";
				cin>>name;
			    
				cout<<"Roll: ";
				cin>>roll;
					
			}
		void put()
			{
				cout<<"NAME: ";
				cout<<name;
			    
				cout<<"Roll: ";
				cout<<roll;
					
			}
	
	};


int main()	
	{
	stu e1;
	e1.get();
	e1.put();
	
	return 0;
	}
