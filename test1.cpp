#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int count=0;

class Distances{

    int km;
    int m;

    public:
            Distances(){
                
                count ++;
                km=0;
                m=0;
                

            }

            ~Distances(){
               
                cout<<"Object "<<count<<" destroyed"<<endl;
                
                 count--;
            }


            Distances(int x,int y){
                km=x;
                m=y;
                
             }

             void getData(){
                 cin>>km;
                 cin>>m;
             }

            double total(){
                double t;

                t= round(km+(m/1000));

                return t;

            }

            Distances operator -( Distances d2){
                Distances d3;

                d3.km=km-d2.km;
                d3.m= m-d3.m;

                return d3;

            }

};


int main(){
    Distances d1,d2,d3;

    double t1=0.0;

    cout<<"Enter the first distance in km and m respectively"<<endl;
    d1.getData();
    cout<<"Enter the second distance in km and m respectively"<<endl;
    d2.getData();

    d3= d1-d2;


    t1=d3.total();

    cout<<"The total distance approximately = "<<t1<<"kms"<<endl;


    return 0;
}
