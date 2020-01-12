#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int n;

    cout<<"Enter the size of the array"<<endl;;
    cin>>n;
    int arr[n],min,temp;
    cout<<"Enter the "<<n<< " array elements"<<endl;
    for(int i=0;i<n;i++){

        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){

        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
    }

    printf("The array in ascending order\n");

    for(int k=0;k<n;k++){
        cout<<arr[k]<<endl;
    }



    return 0;
}
