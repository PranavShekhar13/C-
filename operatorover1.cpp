#include<iostream>

using namespace std;

class abc{

    int a;
    
    public:
	
	abc(){
	a=0;
	}

	abc(int x){
         a=x;
 	}

	  void getData(void){
    	   	
    	   	cin>>a;
		
    	   }
	   
	   void display(void){	
	   	cout<<"The Sum= "<<a;
	   }			

   
    	     abc operator +(abc t1)
    	     {
		abc t3;
		
    	     	t3.a=a+t1.a;
    	     	
    	     	return t3;
    	     	}
    };

    	    
   int main(){
   	
   	abc t1, t2,sum;
   	
   	cout<<"Enter the value of first operand"<<endl;
   	t1.getData();
   	
   	cout<<"Enter the value of second operand"<<endl;
   	t2.getData();
   	
   	sum=t1+t2;
	
	sum.display();
	
	return 0;

 } 	
    	     	

