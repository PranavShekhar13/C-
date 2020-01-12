//Class Template with Single Parameter

#include<iostream>

using namespace std;


int size=3;
template<class T>

class Vector{
    T *v;

    public:
        Vector(){
            v= new T[size];
            for(int i=0;i<size;i++){
                v[i]=0;
            }
        }

        Vector(int *a){
            for(int i=0;i<size;i++){
                v[i]=a[i];
            }
        }

         T operator *(Vector &y){
             T sum=0;
             for(int i=0;i<size;i++){
                 sum+=this->v[i]+y.v[i];
             }
             return sum;
         }

         void display(){
             for(int i=0;i<size;i++){
                 cout<<v[i]<<"\t";
                 cout<<"\n";
             }

         }

};

int main(){
    int x[3]={1,2,3};
    int y[3]={4,5,6};

    Vector <int> v1 =x;
    Vector <int> v2 =y;

    cout<<"v1 =";
    v1.display();

    cout<<"v2 =";
    v2.display();

    cout<<"v1 X v2 ="<<v1*v2;

    return 0;
}