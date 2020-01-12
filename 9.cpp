/*Define a class to represent a bank account.Include the following members:
Data members
Name of the depositor
Account number 
Type of account
Balance amount in the account

Member function

To assign initial values
To deposit an amount
To withdraw an amount after checking the balance 
To display name and balance 
Write a main program to test the program
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
		bank c;
		c.inval();
		c.deposit();
		c.withdraw();
		c.detail();
	return 0;
	}
