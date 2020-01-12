#include<iostream>

#include<stdlib.h>

using namespace std;

class XYZ;
class ABC{
    private:
        int a;

        public:
            void set(){
                cout<<"Enter the value of a:- ";
                cin>>a;
            }
        
        friend void swap(ABC, XYZ);
};

class XYZ{
    private:
        int b;
        
        public:
            void set(){
                cout<<"Enter the value of b:- ";
                cin>>b;
            }

        friend void swap(ABC, XYZ);
};

void swap(ABC x, XYZ y){

    x.a=x.a*y.b;
    y.b=x.a/y.b;
    x.a=x.a/y.b;

    cout<<"The values after swapping ="<<endl;

    cout<<"a ="<<x.a<<endl;
    cout<<"b ="<<y.b<<endl;
}


int main(){

ABC a;
XYZ b;

a.set();
b.set();

swap(a,b);
    return 0;
}