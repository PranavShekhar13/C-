#include<iostream>

using namespace std;

template<class T>

void swap(T &x, T &y){

    T temp=x;
    x=y;
    y=temp;

}


   void func(int a, int b, float m, float n){

        cout<<"Before Swap:-\n";
        cout<<"a="<<a<<"\n";
        cout<<"b="<<b<<"\n";

        swap(a,b);

        cout<<"After Swap:-\n";
        cout<<"a="<<a<<"\n";
        cout<<"b="<<b<<"\n";

        cout<<"Before Swap:-\n";
        cout<<"m="<<m<<"\n";
        cout<<"n="<<n<<"\n";

        swap(m,n);

        cout<<"After Swap:-\n";
        cout<<"m="<<m<<"\n";
        cout<<"n="<<n<<"\n";





    }


 int main() {

    func(100,200,444.66,555.44);

    return 0;
}