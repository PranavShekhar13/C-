/*Create two classes ABC & XYZ. Both class having a single data type level.By help of friend function just swap the value of two variables*/

#include<iostream>
using namespace std;

class XYZ;
class ABC
	{
		int a;
		
		public:
		
		ABC(){
		a=10;}
		
		friend void swap(ABC &,XYZ &);	
		friend void prin(ABC &,XYZ &);
	};
	
class XYZ
	{
		int b;	
		
		public:
		
		XYZ(){
		b=20;}
		
		friend void swap(ABC & ,XYZ & );
		friend void prin(ABC &,XYZ &);
	
	};	

	void swap(ABC &A1,XYZ &B1)
			{
				int temp=A1.a;
				A1.a=B1.b;
				B1.b=temp;
			}
			
	void prin(ABC &C1,XYZ &C2)
			{
			
			cout<<C1.a<<" "<<C2.b<<endl;
			}		
			
int main()
	{
		ABC x;
		XYZ y;
		cout<<"Before swap"<<endl;
		prin(x,y);
		swap(x,y);
		cout<<"After swap"<<endl;
		prin(x,y);	
		return 0;
	}
