// Performing Input Output Operations on Binary Files

#include<iostream>
#include<fstream>

using namespace std;

int main(){

    float height[4]={175,182,167,123};

     ofstream outfile;

     outfile.open("BINARY");

     outfile.write((char *)&height, sizeof(height));

     outfile.close();

     for(int i=0;i<4;i++){
         height[i]=0;
     }

     ifstream infile;

     infile.open("BINARY");

     infile.read((char *)&height,sizeof(height));

     for(int i=0;i<4;i++){
         cout<<height[i]<<"\n";
         
     }

     infile.close();


    return 0;
}