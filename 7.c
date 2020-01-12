/*Create structure employee having data members 
		employee id, employee name,department and salary
	Input information of 10 employees*/

#include<stdio.h>

struct employee{
		int id;
		char name[50];
		char dept[20];
		float sal;
		}s[10];

void main()
	{
		//INPUT
		for(int i=0;i<10;i++)
			{
				printf("\nINPUT %d",i+1);
				printf("\nID: ");
				scanf("%d",&s[i].id);
				printf("\nNAME: ");
				scanf("%s",s[i].name);
				printf("\nDEPARTMENT: ");
				scanf("%s",s[i].dept);
				printf("\nSALARY: ");
				scanf("%f",&s[i].sal);
												
			}
	
		//OUTPUT
		for(int i=0;i<10;i++)
			{
				printf("\nOUTPUT %d",i+1);
				printf("\nID: ");
				printf("%d",s[i].id);
				printf("\nNAME: ");
				printf("%s",s[i].name);
				printf("\nDEPARTMENT: ");
				printf("%s",s[i].dept);
				printf("\nSALARY: ");
				printf("%.2f",s[i].sal);
												
			}
	}

