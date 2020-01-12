/*
	Create a class student having 
	data members roll,name,mark
	& member function getdata,display data.
	Input the info of 5 students and display the result.
*/
#include<iostream>
using namespace std;

class student
	{
		private:
			int roll;
			char name[50];
			float marks;
	
		public:
			void getdata()
				{
					cout<<"Input: "<<endl;
					cout<<"Roll No: ";
					cin>>roll;					
					cout<<"Name: ";
					cin>>name;
					cout<<"Marks: ";
					cin>>marks;						
				}
			
			void showdata()
				{
					cout<<"Output: "<<endl;
					cout<<"Roll No: "<<roll<<endl;				
					cout<<"Name: "<<name<<endl;
					cout<<"Marks: "<<marks<<endl;
				
				}	

	
	};

int main()
	{
		student a[5];
		for(int i=0;i<5;i++)
			{		
				a[i].getdata();
			}	
			
			for(int i=0;i<5;i++)
			{		
				a[i].showdata();

			}	
			
			return 0;
	}
