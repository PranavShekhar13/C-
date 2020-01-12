//Create two classes ABC, XYZ, both classes having single integer type data member, By help of friend function just swap the value of two variaales.//

#include<iostream>
using namespace std;
class XYZ;
class ABC
{
    	int x;
    	 
    	 public:
    	   void setData(int i)
    	   {
    	   x=i;
    	   }
   friend void swap(ABC,XYZ);	    
 };
 
 class XYZ
 {
 		int y;
 			
 			public:
 				void setdata(int j)
 					{
 					y=j;
 					
 					}
 	friend void swap(ABC,XYZ);
 };
 
 void swap(ABC a,XYZ b)
 {
 a.x =(a.x)*(b.y);
 b.y =(a.x)/(b.y);
 a.x= (a.x)/(b.y);
 cout<<"The values after swapping:-"<<endl;
 cout<<"x ="<<a.x<<endl;
 cout<<"y ="<<b.y<<endl;
 
 }
 
 
 int main()
 {
 ABC a;
 XYZ b;
 a.setData(10);
 b.setdata(20);
 swap(a,b);
 return 0;
 }
