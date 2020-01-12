#include<iostream>
#include<stdlib.h>

using namespace std;

class Vect{

	int i;
	int j;
	int k;
	
	public:
	
		Vect(){
		
		i=0;
		j=0;
		k=0;
		}
		
		Vect(int x, int y, int z){
			
			i=x;			
			j=y;
			k=z;
		}
	

		void getData(){
			
			cin>>i;
			cin>>j;
			cin>>k;
		}
		
		void display(void){
		
		cout<<"The First Vector= "<<i<<"i +"<<j<<"j +"<<k<<"k"<<endl;
		}
		
		
		
	Vect operator =(Vect v){
		
		i= v.i;
		j= v.j;
		k= v.k;	
	}
	
	};
	
	int main(){
	
	Vect v1;
	Vect v2;
	
	cout<<"Enter the values of i j k of the first vector which is to be assigned to a second vector"<<endl;
	v1.getData();
	
	cout<<"Enter the values of i j k of the second vector"<<endl;
	v2.getData();
	
	v1=v2;
	
	v1.display();
	
	return 0;
	}
	
