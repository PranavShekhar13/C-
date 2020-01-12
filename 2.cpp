//Create a class and take n inputs

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
				cout<<name<<endl;
			    
				cout<<"Roll: ";
				cout<<roll<<endl;
					
			}
	
	};


int main()	
	{
	int n;
	cout<<"How many inputs"<<endl;
	cin>>n;
	class stu *s=new stu[n];
	for(int i=0;i<n;i++)
	{
	s[i].get();
	}
	for(int i=0;i<n;i++)
	{
	s[i].put();
	cout<<endl;
	}
	return 0;
	}
