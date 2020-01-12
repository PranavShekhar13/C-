#include<stdio.h>

#include<stdlib.h>

int main(){

    int n,a,d;

    printf("Enter the size of the array\n");

    scanf("%d",&n);

    int *p=(int *)malloc(n * sizeof(int));

    printf("Enter the %d array elements\n",n);
    for(int i=0;i<n;i++){

        scanf("%d",p+i);
    }

    for(int j=0;j<n;j++){

    while(*(p+j)!=0){

        a= *(p+j)%10;
        d=d*10+a;
        *(p+j)=*(p+j)/10;
    }
        if(d==*(p+j)){
            printf("Pallindrome Number:- %d",*(p+j));
        }
    }

    return 0;
}