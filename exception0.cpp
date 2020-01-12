#include<iostream>

#include<stdlib.h>

using namespace std;

int main(){

	int a,b,c,result1,result2;
	
	cout<<"Enter the values of the three numbers"<<endl;
	
	cin>>a;
	cin>>b;
	cin>>c;
	


	try{
		if(a!=0&&b!=0&&c!=0){
		
		if(a!=0)
		{
			result1=b/a;
			result2=c/a;
			
			cout<<"Result 1 on dividing with a ="<<result1<<endl;
			cout<<"Result 2 on dividing with a ="<<result2<<endl;
		}
		if(b!=0)
		{
			result1=a/b;
			result2=c/b;
			
			cout<<"Result 1 on dividing with b ="<<result1<<endl;
			cout<<"Result 2 on dividing with b ="<<result2<<endl;
		}
		
		if(c!=0)
		{
			result1=a/c;
			result2=b/c;
			
			cout<<"Result 1 on dividing with c ="<<result1<<endl;
			cout<<"Result 2 on dividing with c ="<<result2<<endl;
		}		
		
		}
		
		else{
			throw(a);
			throw(b);
			throw(c);
		}
		

	}
	
	catch(int n){
	
		cout<<"Exception caught:- Cannot Divide by zero"<<endl;
	
	}


return 0;
}
