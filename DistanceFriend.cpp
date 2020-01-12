
#include<iostream>
#include<stdlib.h>
#include<math.h>


using namespace std;

class Distances{

     int km;
     int m;
     int cm;

	public:

	Distances(){
	 km=0;
	 m=0;
	 cm=0;
	}
	
	
	Distances(int x, int y, int z){
	 km=x;
	 m=y;
	 cm=z;
	}

	void getData();

	double total(void);
	
   friend Distances operator +(Distances, Distances);
   };


	void Distances::getData(){
	   cin>>km;
	   cin>>m;
	   cin>>cm;
	}
	
	double Distances::total(void){
	
	double t;
	
	t= round(km+(m/1000)+(cm/1000000));
	
	return t;
	
	}




	
  Distances operator +(Distances d1, Distances d2){
	Distances D;
	
	D.km= d1.km+d2.km;
	D.m= d1.m+d2.m;
	D.cm= d1.cm+d2.cm;
	
	return D;
	}






	
	int main(){
	
	Distances d1;
	Distances d2;
	double t1=0.0;
	
	cout<<"Enter the values of 1st Distance in km,m and cm respectively"<<endl;
	d1.getData();
	
	cout<<"Enter the values of 2nd Distance in km,m and cm respectively"<<endl;
	d2.getData();
	
	Distances d3;
	d3=d1+d2;
	
	t1=d3.total();
	
	cout<<"The total distance approximately ="<<t1<<"kms"<<endl;
	
	return 0;
	}
