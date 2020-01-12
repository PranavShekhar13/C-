#include<iostream>

#include<stdlib.h>

using namespace std;

int count=0;

class abc{

    public:

    abc(){
        count++;
        cout<<"Object "<<count<<" created"<<endl;
    }

    ~abc(){
        cout<<"Object "<<count<<" destroyed"<<endl;
        count--;
    }

};

int main(){

    cout<<"Creating 1st object inside main block..."<<endl;
    abc A;

    {
        cout<<"Inside second block...."<<endl;
        cout<<"Creating two more objects..."<<endl;
        abc B,C;

        cout<<"Leaving second block...."<<endl;

    }


cout<<"Leaving main block...."<<endl;

}