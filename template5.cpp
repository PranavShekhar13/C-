#include<iostream>

using namespace std;

template<class T>

void bubble(T a[],int n){

    for(int i=0;i<n-1;i++){
        
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
               swap(a[j],a[j+1]);
            }
        }
    }
}
template <class X>
void swap( X &x, X &y){

    X temp=x;
    x=y;
    y=temp;
}

int main(){

    int x[5]= {10,30,20,50,40};
    float y[5]= {1.1,5.5,2.2,3.3,4.4};

    bubble(x,5);
    bubble(y,5);

    cout<<"Sorted X array:-"<<"\n";

    for(int i=0;i<5; i++){
        cout<<x[i]<<"\t";
    }

    cout<<endl;

    cout<<"Sorted Y array:-"<<"\n";

    for(int j=0;j<5; j++){
        cout<<y[j]<<"\t";
    }

return 0;
}
