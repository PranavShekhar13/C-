#include<iostream>

#include<stdlib.h>

	using namespace std;
	
	
	int main(){
	
	try{
	int n;
	
	cout<<"Enter the Week Day number "<<endl;
	cin>>n;
   if(n>0 && n<=7)
     {
	if(n==1){
	throw("Monday");
	}
	else if(n==2){
	throw("Tuesday");
	}
	else if(n==3){
	throw("Wednesday");
	}
	else if(n==4){
	throw("Thursday");
	}
	else if(n==5){
	throw("Friday");
	}
	else if(n==6){
	throw("Saturday");
	}
	else if(n==7){
	throw("Sunday");
	}
  }
  else{
  cout<<"Wrong Choice"<<endl;
  }	
 }
  
  catch(const char *a){
  	cout<<a<<endl;
  	
  }
	 
 return 0;
 }
