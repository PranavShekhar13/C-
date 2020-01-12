/*Addition & substraction using friend function*/

#include<iostream>
using namespace std;

class num
	{
		private:
		int r,im;
		
		public:
		
		num()
		{
			r=1;im=1;
		}
		
		num(int a,int b)
			{
				r=a;
				im=b;
			}
		
		void dis(num &a)
			{
				cout<<"R: "<<a.r<<" "<<"I: "<<a.im<<endl;
			
			}
		
		friend num sum(num &,num &);
		friend num sub(num &,num &);
		
	};
	
		num sum(num &a,num &b)
			{	num c;
				c.r=a.r+b.r;
				c.im=a.im+b.im;
				return c;		
			}
			
		num sub(num &a,num &b)
			{	num d;
				d.r=a.r-b.r;
				d.im=a.im-b.im;
				return d;
			}	
			
			
int main()
	{
		num z(2,2),y,c;
		c=sum(z,y);
		c.dis(c);
		c=sub(z,y);
		c.dis(c);
		return 0;
	}	
