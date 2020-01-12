//Class Template with Default Data Types in Class Definition

#include<iostream>
using namespace std;

template<class T1=int, class T2=int>

class Test{
    T1 a;
    T2 b;

    public:
        Test( T1 x, T2 y){
            a=x;
            b=y;
        }

        void display(){
            cout<<a<<" and "<<b<<"\n";
        }
};

int main(){
    Test <float,int> test1(2.5,3);
    test1.display();

    Test<char,int> test2('W',100);
    test2.display();

    Test<> test3('A',123.456);
    test3.display();


    return 0;
}