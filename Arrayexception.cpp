#include<iostream>

#include<stdlib.h>

using namespace std;

int main(){
	try{
	int size;
	
	cout<<"Enter the size of the array"<<endl;
	cin>>size;
	
	int arr[size],index;
	
	cout<<"Enter the "<<size<<" numbers"<<endl;
	for(int i=0;i<size;i++){
	
	cin>>arr[i];
	}

	cout<<"Enter the index to be searched for"<<endl;
	
	cin>>index;
	
	if(index>=0 && index<size){
	
	for(int i=0;i<size;i++){
	
	if(index==i){

	
		cout<<"Value at "<<i<<" ="<<arr[i]<<endl;
		break;
	 
          }
	}
     }
	 else{	 
	   if((index<0) || (index>size-1)){
	 throw(index);
	 }
       }

	
	
  }
  catch(int n){
  
  cout<<"Index out of bound"<<endl;
  }
  
	return 0;
	
 }

