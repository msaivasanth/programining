#include<stdio.h>
void linerasearch(int [], int , int );
void main()
{
 int a[10], i, n, key;
 printf("Enter no of elements: \n");
 scanf("%d",&n);
 printf("Enter %d elements: \n",n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Enter the key element: \n");
 scanf("%d",&key);
 linearsearch(a,n,key);
}
void linearsearch(int a[], int n, int key)
{
 int i,flag;
 for(i=0;i<n;i++)
 {
  if(a[i]==key)
  {
   flag=1;
   break;
  }
 }
 if(flag==1)
 printf("The key element %d is found at location %d \n",key,i+1);
 else
 printf("The key element %d is not found \n",key);
}
