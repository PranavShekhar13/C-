/*Create a structure in C named student having data members
		rollno,name of student,branch and CGPA.
  input the information of a single student and display the result*/

#include<stdio.h>

struct student{
		int roll;
		char name[50];
		char branch[5];
		float cgpa;
		}S1;

void main()
	{
		//INPUT
		printf("Input:");
		printf("\nROLL NO: ");
		scanf("%d",&S1.roll);
		printf("\nNAME: ");
		scanf("%s",S1.name);
		printf("\nBRANCH: ");
		scanf("%s",S1.branch);
		printf("\nCGPA: ");
		scanf("%f",&S1.cgpa);

		//OUTPUT
		printf("Output:");
		printf("\nROLL NO: ");
		printf("%d",S1.roll);
		printf("\nNAME: ");
		printf("%s",S1.name);
		printf("\nBRANCH: ");
		printf("%s",S1.branch);
		printf("\nCGPA: ");
		printf("%.1f",S1.cgpa);

		}
