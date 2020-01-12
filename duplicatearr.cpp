 #include<iostream>
#include<stdlib.h>

using namespace std;


    int main() {

        int n,j,k=0;

        cout<<"Enter the size of the array"<<endl;
        cin>>n;

        int arr[n];

        cout<<"Enter the " <<n<< " array elements"<<endl;

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        cout<<"The array elements are:-"<<endl;

        for( j=0;j<n;j++){
            for ( k= 0; k<j; k++)
            {
                if(arr[j]==arr[k]){
                    break;
                }
            }
            if(j==k){
                cout<<arr[j]<<endl;
            }
            
        }

        return 0;
    }

    
