/*WAP in C++ to create a structure Student with
		Name,Roll,marks of 3 subject
 take input of n students and display according to grade*/

#include<iostream>
#include<stdlib.h>

using namespace std;

struct student{
		char name[50];
		int roll;
		float mar[3];
		int avg;
		char grade;
		};

int main()
	{
		int n;
		struct student temp;
		cout<<"Input the number of entries you want to do: ";
		cin>>n;
		student *s=new student[n];
		for(int i=0;i<n;i++)
		{
			cout<<"\n\nINPUT "<<i+1<<" :"<<endl;
			cout<<"NAME: ";
			cin>>s[i].name;
			cout<<"ROLL NO: ";
			cin>>s[i].roll;
			cout<<"MARKS: "<<endl;
			cout<<"MATHS: ";
			cin>>s[i].mar[0];
			cout<<"SCIENCE: ";
			cin>>s[i].mar[1];
			cout<<"ENGLISH: ";
			cin>>s[i].mar[2];
			

		//ASSIGNING VALUE TO AVERAGE		
		s[i].avg=(s[i].mar[0]+s[i].mar[1]+s[i].mar[2])/30;	
		
		//ASSIGNING VALUE TO GRADE
		switch(s[i].avg)
			{
				case 10:
				case 9: s[i].grade='O';
					break;
				case 8: s[i].grade='E';
					break;
				case 7: s[i].grade='A';
					break;
				case 6: s[i].grade='B';
					break;				
				case 5: s[i].grade='C';
					break;
				case 4: s[i].grade='D';
					break;		
				case 3: 
				case 2:				
				case 1:
				case 0:	s[i].grade='F';
					break;
				default : s[i].grade='i';
			}	
		}	
		
		//SORTING
		for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
					{
						if(s[j].avg<s[j+1].avg)
							{
								temp=s[j];
								s[j]=s[j+1];
								s[j+1]=temp;
							}			
					}
			}

		//OUTPUT
		for(int i=0;i<n;i++)
		{
			cout<<"\n\nSCORECARD:"<<endl;
			cout<<"NAME: ";
			cout<<s[i].name;
			cout<<"\nGRADE: ";
			cout<<s[i].grade;
		}	
		return 0;
	}
