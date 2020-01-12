//Reading Two Files Simultaneously


#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;

 int main() {
     string country[5];
     string capital[5];

     ifstream infile1, infile2;
       infile1.open("COUNTRY");
       infile2.open("CAPITAL");

       for(int i=0;i<5;i++){

           if(infile1.eof()!=0){
               cout<<"Exit from country\n";
               exit(1);
           }
               infile1>>country[i];
               cout<<"The capital of "<<country[i]<<"\n";

           if(infile2.eof()!=0){
               cout<<"Exit from Capital\n";
               exit(1);
           }
           
           infile2>>capital[i];
           cout<<capital[i]<<"\n";

       }



    return 0;
}

