/*
	Create a class complex
	data members real and imaginary
	& member function add
	& use default constructor,paramaterized & copy constructor.
*/

#include<iostream>
using namespace std;

class complex
	{
		private:
			float r,im;
	
		public:
			complex()
				{
	 				r=0;
					im=0;	
				}
			
			complex(int a,int b)
				{
					r=a;
					im=b;
				}
				
			complex(complex & c)
				{
					r=c.r;
					im=c.im;
				
				}
				
			void showdata()
				{
					cout<<"Output: "<<endl;
					cout<<r<<"+i"<<im<<endl;
				
				}	
			complex add(complex  a,complex  b)
				{	complex z;
					z.r=(a.r)+(b.r);
					z.im=(a.im)+(b.im);
					return z;
				}	
	
	};

int main()
	{
		complex a(1,2),b(2,3),c;
		c=c.add(a,b);
		c.showdata();
	    return 0;
	}
