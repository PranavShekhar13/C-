#include<stdio.h>

#include<stdlib.h>

void addatbeg();
void addatend();
void addinbet();
void deleteatbeg();
void deleteatend();
void deleteinbet();
void Search();
void reverse();
void display();
int length();
void nthnode();

struct node{
    int info;
    struct node *link;
};

struct node *start = NULL;


int main(){

int ch;

while(1){
    printf("\nLINKED LIST OPERATIONS\n");
    printf("\n1.Append at beggining");
    printf("\n2.Append at end");
    printf("\n3.Append in between");
    printf("\n4.Delete at beggining");
    printf("\n5.Delete at end");
    printf("\n6.Delete in between");
    printf("\n7.Search Information");
    printf("\n8.Reverse");
    printf("\n9. To display nth node from end of the list");
    printf("\n10. Length of the List");
    printf("\n11. Display");
    printf("\n12. Exit\n");


    printf("\nEnter your choice\n");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1: addatbeg();
        break;
    case 2: addatend();
        break;
    case 3: addinbet();
        break;
    case 4: deleteatbeg();
        break;
    case 5: deleteatend();
        break;
    case 6: deleteinbet();
        break;
    case 7: Search();
        break;
    case 8: reverse();
        break;
    case 9: nthnode();
        break;
    case 10: length();
        break;
    case 11: display();
        break;
    case 12: exit(1);
        break;
    
    default:
        printf("\nWrong Choice");
    }


}


}

void addatbeg(){
    struct node *p =(struct node *)malloc(sizeof(struct node));

    printf("Enter the information\n");
    scanf("%d",&p->info);
    p->link=NULL;

    if(start==NULL){
        start=p;
    }

    else
    {
        p->link=start;
        start=p;
       
    }


}

void addatend(){
    struct node *p =(struct node *)malloc(sizeof(struct node));
    struct node *q;

    printf("Enter the information\n");
    scanf("%d",&p->info);
    p->link=NULL;

    if(start==NULL){
        start=p;
    }

    else
    {
      q=start;
      while (q->link!=NULL)
      {
         q=q->link;
      }
      q->link=p;
}

}

void addinbet(){
    struct node *p =(struct node *)malloc(sizeof(struct node));
    struct node *q;
    
    int append;
    printf("Enter the information of the node which needs to be appended after\n");
    scanf("%d",&append);



    printf("Enter the information of the node to be inserted\n");
    scanf("%d",&p->info);
    p->link=NULL;
    
    if(start==NULL){
        start=p;
    }

    else
    {
        q=start;
        while(q->link!=NULL){
        if(q->info==append){
            break;
        }
         q=q->link;
        
    }
        p->link=q->link;
        q->link=p;
    }

}

void deleteatbeg(){
    struct node *p=start;
    if(p==NULL){
        printf("The List is Empty\n");
    }
    else{
        start=p->link;
        printf("The Deleted Information =%d",p->info);
        free(p);
    }

}

void deleteatend(){
    struct node *p;
    struct node *q=start;

    if(start==NULL){
        printf("The List is Empty\n");
    }
    else{
        while(q->link->link!=NULL){
            q=q->link;
        }
        p=q->link;
        q->link=NULL;
        printf("The Deleted information = %d",p->info);
        free(p);

    }
}

void deleteinbet(){
    struct node *p;
    struct node *q=start;

    if(start=NULL){
        printf("The list is Empty\n");
    }
    else{
        int infob;

        printf("Enter the information to be deleted after\n");
        scanf("%d",&infob);

        while (q->info!=infob)
        {
            q=q->link;
        }

        p=q->link;
        q->link=p->link;

        printf("The deleted information =%d",p->info);
        free(p);
        
    }
    

}

void Search(){
 
  int e;
  printf("\nEnter the information to be searched \n");
  scanf("%d",&e);


 struct node *p=start;
 
 if(p==NULL){
 	
 	printf("The List is Empty \n");
   }
   
  else{
  
  while(p){
  
  		if(e==p->info){
  		
  		printf("Element found \n");
  		break;
  		}
  		
  		else{
  		
  		if(p->link==NULL){
  		printf("Element not Found \n");
  		
  		break;
  		}
  		
  		}
     
     p=p->link;
  	} 
  
  	
  }
  


}

void reverse(){
    int i,j,k,temp,len;
    struct node *p=start;
    struct node *q=start;
    len=length();
    i=0,j=len-1;
    while (i<j)
    {
        k=0;
        while(k<j){
            q=q->link;
        }
        temp=p->info;
        p->info=q->info;
        q->info=temp;
        i++;
        j--;
        p=p->link;
        q=start;
    }
    
}

void nthnode(){
    struct node *p=start;

        int n;
        printf("Enter the value of n \n");
        scanf("%d",&n);


        if(p==NULL){
            printf("The list is Empty\n");
        }
        else{
            int count =1;

        while (count!=(length()-n+1))
        {
            p=p->link;
            count++;
        }
        printf("The information at node %d from the end of the list= %d",n,p->info);
        
    }
        
}

int length(){
    int count=0;
    struct node *p=start;
    if(p==NULL){
        printf("The List is Empty\n");
    }
    else
    {
    while (p)
    {
        count++;
        p=p->link;
    }
    }
    return count;
}
    
void display(){
	
	struct node *p=start;
    
	
	
	if(p==NULL){
		printf("\nLinked List is Empty \n");
	}
	
	else{
		printf("\nThe List is:-\n");
		while(p){
			printf("%d-->",p->info);
			p=p->link;
		
		}
	
	}
	
}
