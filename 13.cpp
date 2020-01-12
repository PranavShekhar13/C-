/* Create a class arcal
having data members length and breadth
& the member function getdata,show data & calculate the area*/

#include<iostream>
using namespace std;

class arcal
	{
		private:
			float l,b;
	
		public:
			void getdata()
				{
					cout<<"Input: "<<endl;
					cout<<"Length: ";
					cin>>l;					
					cout<<"Breadth: ";
					cin>>b;						
				}
			
			void showdata()
				{
					cout<<"Output: "<<endl;
					cout<<"Length: "<<l<<endl;				
					cout<<"Breadth: "<<b<<endl;
				
				}	
			void area()
				{
					cout<<"Area: "<<l*b<<endl;
				}	
	
	};

int main()
	{
		arcal a;	
		a.getdata();
		a.showdata();
		a.area();
		return 0;
	}
