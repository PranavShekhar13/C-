#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

class Money{

	int r;
	int p;

	public:

		Money(){
			r=0;
			p=0;
		}

		Money(int x, int y){
			r=x;
			p=y;
		}

		friend void operator -(void);
		
		friend Money total operator +();

		void getdata();

		double total(void);


};

void Money::getdata(){
	cin>>r;
	cin>>p;
}

double Money::total(){

	double t;

	t=round(r+(p/100));


	return t;
}

void operator -(void){
	r=-r;
	p=-p;
}

Money total operator +(Money M1, Money M2){

	Money Msum;

	Msum.r=M1.r+M2.r;
	Msum.p=M1.p+M2.p;

	return Msum;

}


int main(){

	Money M1,M2, M3;

	cout<<"Enter the first amount in rupees and paise respectively\n";
	M1.getdata();

	cout<<"Enter the second amount in rupees and paise respectively\n";
	M2.getdata();

	-M2;

	M3=M1+M2;

	cout<<"The total amount in rupeees and paise ="<<M3.total();
	



}