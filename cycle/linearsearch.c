#include <stdio.h>
void main()
{
    int i,a[10],n,key,found=0;
 printf("Enetr the limit");
 scanf("%d",&n);
 printf("ENter the numbers");
 for(int i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 printf("Enetr the value to search");
 scanf("%d",&key);
 for(i=0;i<n;i++)
 {
     if(a[i]==key)
     {
         found=1;
     }
 }
 
 if(found==1)
 {
     printf("VAlue is %d is present at position %d",key,i);
 }
 else
 printf("value %d is not present",key);
}
