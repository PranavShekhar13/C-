//Reading and writing class objects to files

#include<iostream>
#include<fstream>

using namespace std;

class Inventory{
    char name[50];
    int code;
    float cost;

    public:
        void get(){
            cout<<"Enter the name of the item\n";
            cin>>name;
            cout<<"Enter the code of the item\n";
            cin>>code;
            cout<<"Enter the cost of the item\n";
            cin>>cost;
        }

        void display(){
            cout<<"<Name:- "<<name<<"\n";
            cout<<"Code:- "<<code<<"\n";
            cout<<"Cost:- "<<code<<"\n";
        }
};

int main(){

    Inventory item[3];

    fstream file;

    file.open("DATA", ios::in| ios::out);

    for(int i=0;i<3;i++){
        item[i].get();
        file.write((char *)&item[i],sizeof(item[i]));
    }

    file.seekg(0);

    cout<<"INVENTORY:-\n";

    for(int i=0;i<3;i++){
        file.read((char *)&item[i],sizeof(item[i]));
        item[i].display();
    }




    return 0;
}