/*Create a structure Time with
		Hr,Min,Sec
 Add two time and display*/

#include<iostream>
using namespace std;

struct time{
		int hr;
		int min;
		int sec;
		}s[3];

int main()
	{	int a=0,b=0,c=0;
		//INPUT
		for(int i=0;i<2;i++)
		{
			cout<<"\n\nINPUT "<<i+1<<endl;
			cout<<"HR:";
			cin>>s[i].hr;
			cout<<"MIN:";
			cin>>s[i].min;
			cout<<"SEC:";
			cin>>s[i].sec;
		}

		//ADDING
		
		a=s[0].sec+s[1].sec;
		if(a>=60)
			{
				a-=60;
				b+=1;
				}	
		s[2].sec=a;
		b+=s[0].min+s[1].min;
		if(b>=60)
			{
				b-=60;
				c+=1;
				}	
		s[2].min=b;	

		s[2].hr=s[0].hr+s[1].hr+c;
		
		//OUTPUT
		
		cout<<s[2].hr<<"HR "<<s[2].min<<"MIN "<<s[2].sec<<"SEC ";
		return 0;
	}


