//Class Template with Multiple Parameters

#include<iostream>
using namespace std;

template<class T1, class T2>

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


    return 0;
}