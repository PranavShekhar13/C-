#include<iostream>

#include<stdlib.h>

using namespace std;

class num{

    private:
        int r;
        int im;

        public:

            num(){
                r=0;
                im=0;
            }
            
            num(int a,int b){
                r=a;
                im=b;

            }

            void display(num &x){
                cout<<x.r<<" + "<<x.im<<"i"<<endl;
            }

            
           friend num sum(num &, num &);
           friend num sub(num &, num &);


};

num sum(num &x, num &y){

    num s;

    s.r= x.r+y.r;
    s.im=x.im+y.im;

    

    return s;


}

num sub(num &x, num &y){

    num d;

    d.r= x.r-y.r;
    d.im=x.im-y.im;

    

    return d;


}







int main(){

    num A(3,4),B(2,1),C;

    C=sum(A,B);
    C.display(C);
    C=sub(A,B);
    C.display(C);
    

    return 0;
}