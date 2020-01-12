#include<iostream>
#define MAX 5

using namespace std;

template<class T>

T Min(T A[MAX]){
    T min=A[0];
    for(int i=1;i<MAX;i++){
        if(A[i]<min){
            min=A[i];
        }
    }
    return min;
}

int main(){

    int minI;
    float minF;
    char minC;

    int I[5]={20,4,3,38,97};
    float F[5]={-9.9,12.2,3.1,9.9,8.9};
    char C[5]={'a', 'A', '/', '4', '~'};

    minI=Min(I);
    minF=Min(F);
    minC=Min(C);

    cout<<"Minimum Value in integer array "<<minI<<"\n";
    cout<<"Minimum Value in float array "<<minF<<"\n";
    cout<<"Minimum Value in character array "<<minC<<"\n";



    return 0;
}