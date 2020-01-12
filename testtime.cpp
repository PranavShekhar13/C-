#include<iostream>

#include<stdlib.h>

using namespace std;

struct time{
    int hr;
    int min;
    int sec;
}s[3];

int main(){
    int a,b,c=0;

    for(int i=0;i<2;i++){
        cout<<"\n\nINPUT "<<i+1<<endl;

        cout<<"HR: ";
        cin>>s[i].hr;

        cout<<"MIN: ";
        cin>>s[i].min;

        cout<<"SEC: ";
        cin>>s[i].sec;

    }

    a=s[0].sec+s[1].sec;

    if(a>=60){
        a=a-60;
        b=b+1;
    }

    s[2].sec=a;

    b=b+s[0].min+s[1].min;


    if(b>=60){
        b=b-60;
        c=c+1;
    }

    s[2].min=b;

    s[2].hr=s[0].hr+s[1].hr+c;


cout<<"TIME: "<<s[2].hr<<"HRS "<<s[2].min<<"MINS "<<s[2].sec<<"SECS"<<endl;


return 0;
}
