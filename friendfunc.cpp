#include<iostream>
using namespace std;

class XYZ;
class ABC
 {
	private:
		int value1;
	public:
	   void data(int a){
	   	value1=a;
	   	}
	   void display(void){
	   	cout<<value1<<"\n";
	   	}
	   	friend void exchange(ABC &, XYZ &);
	   	
};

class XYZ
  {
  	private:
  		int value2;
  	public:
  		void data(int a){
  		   value2=a;
  		   }
  		 void display(void){
  		 	cout<<value2<<"\n";
  		 	}
  		 friend void exchange(ABC &, XYZ &);
  };
  
  void exchange(ABC & x, XYZ & y){
  int temp=x.value1;
  x.value1=y.value2;
  y.value2=temp;
  }
  
  
  int main()
  {
  class ABC A;
  class XYZ X;
  
  	A.data(100);
  	X.data(200);
  	
  	cout<<"Values Before Swapping"<<"\n";
  	A.display();
  	X.display();
  	
  exchange(A,X);
  
  cout<<"Values after Swapping"<<"\n";
  A.display();
  X.display();
  
  return 0;
  
  }
