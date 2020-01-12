//WAP IN C++ create a structure complex & find sum of two structure

#include<iostream>
using namespace std;

struct complex{
		int real;
		int img;
		} s[3];

int main()
	{
		//INPUT
		cout<<"INPUT:"<<endl;
		for(int i=0;i<2;i++)
			{
				cout<<"\nNumber "<<i+1<<"\n"<<endl;
				cout<<"REAL: ";
				cin>>s[i].real;
				cout<<"IMAGINARY: ";
				cin>>s[i].img;
						
			}		
		
		//ADDITION
		s[2].real=s[0].real+s[1].real;
		s[2].img=s[0].img+s[1].img;


		//OUTPUT
		cout<<"\nOUTPUT:"<<endl;
		cout<<s[2].real<<"+i"<<s[2].img<<endl;	
		return 0;
	}
