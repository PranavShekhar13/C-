#include<iostream>

using namespace std;

int main()
{
int n,a,b,d=0,sum=0;
cout<<"Enter a number"<<endl;
cin>>n;
b=n;
while(n!=0)
{
a=n%10;
d=a*a*a;
sum=sum+d;
n=n/10;
}
if(sum==b){
cout<<"Armstrong Number"<<endl;
}
else{
cout<<"Not an Armstrong Number"<<endl;
}
return 0;
}
