/*Write a structure Hospital having data members
	patient id,patient name,doctor name
  Create another structure date having data members
	day,month,year 
  which is nested structure of hospital .
 Input the information of 5 students.
*/

#include<stdio.h>

struct hospital{
		int id;
		char pname[50];
		char dname[50];
			
			struct date{
					int day;
					int month;
					int year;
					}d;
		
		}p[5];

void main()
	{
		//INPUT
		for(int i=0;i<5;i++)	
		{
			printf("\nINPUT %d",i+1);
			printf("\nPATIENT ID:");
			scanf("%d",&p[i].id);
			printf("\nPATIENT NAME:");
			scanf("%s",p[i].pname);
			printf("\nDOCTOR NAME:");
			scanf("%s",p[i].dname);
			printf("\nDATE dd/mm/yyyy ");
			printf("\nDAY:");
			scanf("%d",&p[i].d.day);
			printf("\nMONTH:");
			scanf("%d",&p[i].d.month);
			printf("\nYEAR:");
			scanf("%d",&p[i].d.year);
		
		}
		//OUTPUT
		for(int i=0;i<5;i++)	
		{
			printf("\nOUTPUT %d",i+1);
			printf("\nPATIENT ID:");
			printf("%d",p[i].id);
			printf("\nPATIENT NAME:");
			printf("%s",p[i].pname);
			printf("\nDOCTOR NAME:");
			printf("%s",p[i].dname);
			printf("\nDATE:%d/%d/%d",p[i].d.day,p[i].d.month,p[i].d.year);
		}
	}
