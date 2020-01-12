
#include<iostream>

#include<stdlib.h>

using namespace std;

int main(){

    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;

    int arr[n],key,j;

    cout<<"Enter the "<<n<<" array elements"<<endl;

    for(int i=0;i<n;i++){

        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        key=arr[i];
        j=i-1;

        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j=j-1;
        }

        arr[j+1]=key;

    }

    cout<<"The array in ascending order"<<endl;

    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
    


    return 0;
}