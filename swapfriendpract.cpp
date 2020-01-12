//Create two classes ABC, XYZ, both classes having single integer type data member, By help of friend function just swap the value of two variables.//

/*#include<iostream>
#include<stdlib.h>

using namespace std;

class XYZ;

class ABC{
    int x;

public: 

    void set(int i){
        x=i;
    }
        friend void swap(ABC,XYZ);

};

class XYZ{
    int y;

    public:

    void set(int j){
        y=j;
    }

    friend void swap(ABC,XYZ);
};

void swap(ABC a, XYZ b){

    a.x=(a.x)*(b.y);
    b.y=(a.x)/(b.y);
    a.x=(a.x)/(b.y);

    cout<<"The values after swapping :-"<<endl;
    cout<<"x ="<<a.x<<endl;
    cout<<"y ="<<b.y<<endl;
}

int main(){
    ABC a;
    XYZ b;

    a.set(10);
    b.set(20);

    swap(a,b);
    
    return 0;
} */


#include<iostream>

#include<stdlib.h>

using namespace std;

class complex{

    int real;
    int imag;

    public:

        void set(){
           
            cout<<"Enter real part:-"<<endl;

            cin>>real;

            cout<<"Enter imaginary part:-"<<endl;

            cin>>imag;
        }

        void display(){
            cout<<"The Complex Number:-"<<endl;

            cout<<real<<" +"<<imag<<"i"<<endl;
        }

    friend complex add(complex, complex);



};

complex add(complex a, complex b){

    complex s;

    s.real=a.real+b.real;
    s.imag=a.imag+b.imag;

    return s;
}

int main(){
    complex a,b,s;
    a.set();
    b.set();
    s=add(a,b);

    s.display();


    return 0;
}