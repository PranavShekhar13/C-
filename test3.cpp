#include<iostream>

#include <stdlib.h>

using namespace std;

class stu{
    private:
        char name[50];
        int roll;
    	
    
    public:
        void get(){
            cout<<"Enter Name:-"<<endl;
            cin>>name;
            cout<<"Enter Roll Number:-"<<endl;
            cin>>roll;
        }

        void put(){
            cout<<"Name:-"<<name<<endl;
            cout<<"Roll:-"<<roll<<endl;
        }


};

int main(){

int n;
cout<<"Enter the number of inputs:-"<<endl;
cin>>n;

    class stu *s= new stu[n];

    for(int i=0;i<n;i++){
        s[i].get();
    }

    for(int i=0;i<n;i++){
        s[i].put();
        cout<<endl;    
        }
        return 0;
}