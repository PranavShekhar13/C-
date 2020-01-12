//MultiLevel Inheritance

#include<iostream>
#include<stdlib.h>

using namespace std;

class Student{

    int roll;
    char name[50];

    public:

        void getData(){

            cout<<"Enter the name"<<endl;
            cin>>name;
            cout<<"Enter the roll no."<<endl;
            cin>>roll;

        }

        void display(){
            cout<<"\n\nInformation about the Student"<<endl;
            cout<<"\nName :-"<<name<<endl;
            cout<<"Roll:-"<<roll<<endl;
        }

};

class Theory:public Student{
    
    protected:
    int marks1;

    public:

        void getDataT(){
            cout<<"Enter the Theory Marks"<<endl;
            cin>>marks1;

        }

        void displayT(){
            cout<<"Marks in Theory:- "<<marks1<<endl;

        }

};

class Practicals:public Theory{
    int marks2;

    public:

        void getDataP(){
            cout<<"Enter the Practial Marks"<<endl;
            cin>>marks2;

        }

        void displayP(){
            cout<<"Marks in Practicals:- "<<marks2<<endl;

        }

        int total(){
            int total = marks1+marks2;

            return total;
        }

};


int main(){
    Practicals Obj;

    Obj.getData();
    Obj.getDataT();
    Obj.getDataP();


    Obj.display();
    Obj.displayT();
    Obj.displayP();
    int t1= Obj.total();
    cout<<"Total Marks:- "<<t1<<endl;


    return 0;
}