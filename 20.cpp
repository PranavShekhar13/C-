/*Create  a class rational number
having two data members 
Add two rational no and display them*/

#include<iostream>
using namespace std;

class rational
	{
		int n,d;
		
		public:
		
		void inp(class rational &a)
			{
				cout<<"Input :"<<endl;
				cout<<"NUM: ";
				cin>>a.n;
				cout<<"DEN: ";
				cin>>a.d;	
							
			}


		void sum(class rational &a,class rational &b)
			{	//LCM
				if(a.d==b.d)
					 a.d =a.d;
	
				else if(a.d>b.d)
				{
					if(a.d%b.d==0) {a.d=a.d;
							(a.n)*=a.d;
							(b.n)*=a.d;
								}		
					else 
							{	a.d=(a.d)*(b.d);
								(a.n)*=a.d;
								(b.n)*=a.d;
							}
				}
				else if(a.d>b.d)
				{
					if(a.d%b.d==0){ a.d=b.d;
							(a.n)*=a.d;
							(b.n)*=a.d;							
							}
					else {a.d=a.d*b.d;
								(a.n)*=a.d;
								(b.n)*=a.d;
				
						}
				}

				//ADD
				
				(a.n)+=(b.n);
				cout<<a.n<<" "<<a.d;		
			}

	};


int main()
	{	class rational a,b;
		a.inp(a);
		b.inp(b);

		a.sum(a,b);
		
		
		return 0;

		}
