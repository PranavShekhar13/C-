#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

    class Employee{
        char name[30];
        int code;

    public:

        Employee(){
            
        }

        Employee(char *n,int c){
            strcpy(name,n);
            code=c;
        }

        void getdata(){
            cout<<"Enter Employee Name \n";
            cin>>name;
            cout<<"Enter employee code \n";
            cin>>code;
        }

    };

    int main(){

        int i,j;

        Employee e[5];

        for(i=0;i<5;i++){
            e[i].getdata();
        }
        
    fstream file;

    file.open("DATA",ios::in | ios::out);

    for(j=0;j<5;j++){
        file.write((char *)&e[j],sizeof(e[j]));
    }

    file.seekg(0,ios::end);
    int end=file.tellg();

    cout<<"The number of objects created= "<<end<<"\n";


    return 0;
}