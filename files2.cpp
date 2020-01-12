//Using open() member function while dealing with multiple files

#include<iostream>
#include<fstream>

using namespace std;

int main() {

    ofstream ofile;

    ofile.open("COUNTRY");

    string country[5];
    cout<<"Enter 5 countries\n";
    for(int i=0;i<5;i++){
        cin>>country[i];
    }

    for(int j=0;j<5;j++){
        ofile<<country[j]<<"\n";
    }

    ofile.close();

    ofile.open("CAPITAL");

    string capital[5];
    cout<<"Enter the capitals\n";

    for(int k=0;k<5;k++){
        cin>>capital[k];
    }

    for ( int a=0;a<5;a++){
        ofile<<capital[a]<<"\n";
    }
    
    ofile.close();

    ifstream infile;

    infile.open("COUNTRY");

    cout<<"The countries are:-\n";
    for(int b=0;b<5;b++){
        infile>>country[b];
        cout<<country[b]<<"\n";
    }

    infile.close();

    infile.open("CAPITAL");
    cout<<"The Capitals are:-\n";
    for(int c=0;c<5;c++){
        infile>>capital[c];
        cout<<capital[c]<<"\n";
    }




    return 0;
}