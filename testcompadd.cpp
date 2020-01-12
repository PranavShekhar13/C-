#include<iostream>

#include<stdlib.h>

using namespace std;

class complex{
    
    private:
        int real,im;
    
    public:
        complex(){
            real=0;
            im=0;
        }
        complex(int a,int b){
            real=a;
            im=b;
        }
        complex(complex & c)
        {
            real=c.real;
            im=c.im;
        }

        void get(){
            cout<<"Enter the real part: ";
            cin>>real;
            cout<<"Enter the imaginary part: ";
            cin>>im;
        }

        void show(){

            cout<<real<<" +"<<im<<"i";
        }

        complex add(complex a, complex b){
            complex sum;
            sum.real=a.real+b.real;
            sum.im=a.im+b.im;

            cout<<"After addition :-"<<endl;

            return sum;
        }
};

int main(){

    complex a, b,s;
    a.get();
    b.get();
    s=s.add(a,b);

    s.show();

    return 0;
}