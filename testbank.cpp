#include<iostream>

#include<stdlib.h>

using namespace std;

class bank{
    private:
        char name[50];
        int acc;
        char type[4];
        float balance;


    public:

        void set(){
            cout<<"Enter the name: ";
            cin>>name;
            cout<<"Enter the account number: ";
            cin>>acc;
            cout<<"Enter the type of account: SAV/RECC ";
            cin>>type;
            balance=0.0;

        }

        void deposit(){
                float deposit;
            	cout<<"Enter the amount to be deposited:- ";
                cin>>deposit;
                balance=balance+deposit;

                cout<<"Balance:- "<<balance<<endl;

        }

        void withdraw(){
            float withdraw;
            cout<<"\nEnter the amount to be withdrawn:- ";
            cin>>withdraw;

            balance= balance-withdraw;
        }

        void show(){
            cout<<"\nAccount Type: "<<type<<endl;

            cout<<"Customer name: "<<name<<endl;
            
            cout<<"Balance :"<<balance<<endl;

        }

};


int main(){

    bank c;

    c.set();
    c.deposit();
    c.withdraw();
    c.show();
    
    
    return 0;
}