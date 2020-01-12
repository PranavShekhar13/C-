//Using a Constructor while working with s single File


#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream outfile("ITEM");

    char name[40];
    cout<<"Enter the item name\n";
    cin>>name;

    outfile<< name <<"\n";

    float price;
    cout<<"Enter the price of the item\n";
    cin>>price;

    outfile<< price <<"\n";

    outfile.close();

    ifstream infile("ITEM");

    infile>>name;
    infile>>price;

    cout<<"\n";
    cout<<"Name of the Item :-"<<name<<"\n";
    cout<<"Price of the Item :-"<<price<<"\n";

    infile.close();




    return 0;
}