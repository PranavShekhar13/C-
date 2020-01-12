/*
Modify the class and program of 10 such that the program would be able to add two vectors and display the resultant vector.
*/

#include<iostream>
using namespace std;

class vect
	{
		private:
			float i,j,k;

		public:
			void ini()
				{
					cout<<"Input i j k values: ";
					cin>>i>>j>>k;
				}
			float iret(){
				return i;
				}
	
			float jret(){
				return j;
				}

				
			float kret(){
				return k;
				}
			

	};


int main()
	{
		vect v[2];
		for(int i=0;i<2;i++)
		v[i].ini();
		cout<<(v[0].iret())+(v[1].iret())<<"i"<<(v[0].jret())+(v[1].jret())<<"j"<<(v[0].kret())+(v[1].kret())<<endl;
					
		return 0;
		}
