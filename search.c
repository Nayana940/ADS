#include<stdio.h>
int a[50],n,x;
int mid;

int linearsearch(int a[],int x,int n)
{
    for(int i=0;i<n;i++)
    {
        if(x==a[i])
        {
            return i;
        }
    }
    return -1;
}

int binarysearch(int a[],int x,int n)
{
    int b=0;
    int l=n-1;
    while(b<=l)
    {
        mid=(b+l)/2;
        if(x==a[mid])
            return mid;
        else if(x>a[mid])
            b=mid+1;
        else 
            l=mid-1;
    }
    return -1;
}

void main(){
    int ch;
    int x;
    int i,p;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   do{
    printf("1. Linear search\n2. Binary search\n3.Enter your choice:\n");
    scanf("%d",&ch);
    printf("Enter the element to be searched:\n");
    scanf("%d",&x);
    switch(ch)
    { 
        case 1:  
            p = linearsearch(a,x,n);
            if(p == -1)
                printf("Element not found");
            else
                printf("Element found at %d",p);
            break;
        case 2: 
            p = binarysearch(a,x,n);
            if(p == -1)
                printf("Element not found");
            else
                printf("Element found at %d",p);
            break;
	    }
	}while(ch>0&&ch<4);
}

