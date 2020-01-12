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
			
			void getData(){
				
			cin>>r;
			cin>>p;
				
		        }
		
			
			
			double total(void){
					
			double t;
			
			t= round(r+(p/100));
			
			return t;
			}
			
			
			void operator -(){
			r=-r;
			p=-p;
		}

		
	       
	       Money operator +(Money m1){
		
		Money M;
		
		M.r=r+m1.r;
		
		M.p=p+m1.p;
		
		return M;
		}
		
		};

		

		

		
	
	
	
		
		
	int main(){
	Money M1;
	Money M2;
	double t1=0.0;
	
	cout<<"Enter the first amount in rupees and paise respectively"<<endl;
	M1.getData();
	
	cout<<"Enter the second amount to be deducted in rupees and paise respectively"<<endl;
	M2.getData();
	
	Money M3;
	-M2;
	
	M3=M1+M2;
	
	t1=M3.total();
	
	cout<<"The total amount after deduction="<<"Rs"<<t1<<endl;
	
	return 0;
	}
		 	
