#include<iostream>

#include<stdlib.h>

using namespace std;

class staff{
    private:
        int code;
        char name[50];

        public:
            void set(){
                cout<<"Enter the name of the staff "<<endl;
                cin>>name;
                cout<<"Enter the code"<<endl;
                cin>>code;
            }

            void display(){
                cout<<"Name:-" <<name<<endl;
                cout<<"Code:- "<<code<<endl;

            }
};

class teacher: public staff{
    
}