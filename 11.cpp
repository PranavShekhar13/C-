/*
	Modify class of program 9 for handling 10 customers
*/

#include<iostream>
using namespace std;
class bank
	{
		private:
			char dna[50];
			int ac;
			char type[4];
			float balance;

		public:
			void inval()
				{
					cout<<"NAME: ";
					cin>>dna;	
					cout<<"ACCOUNT NO: ";
					cin>>ac;
					balance=0;
					cout<<"ACCOUNT TYPE (SAV/CUR): ";
					cin>>type;
					cout<<"BY DEFAULT BALANCE IS 0 "<<endl;
					}

			void deposit()
				{	
					cout<<"AMOUNT TO DEPOSIT: ";
					cin>>balance;

					}
			void withdraw()
				{	int a;
					cout<<"\nBALANCE: ";
					cout<<balance;
					cout<<"\nAMOUNT TO WITHDRAW: ";
					cin>>a;
					balance-=a;
					cout<<"NEW BALANCE: ";
					cout<<balance;
					} 	

			void detail()
				{	
					cout<<"\nNAME: ";
					cout<<dna;
					cout<<"\nBALANCE: ";
					cout<<balance;
					} 				
	};

int main()
	{
		bank c[10];
		for(int i=0;i<10;i++)
			{
				c[i].inval();
				c[i].deposit();
				c[i].withdraw();
				c[i].detail();
			}
	return 0;
	}
