#include <stdio.h>

int smallest(int *ptr,int size)
{
	int small=*ptr;
	for(int i=1;i<size;i++)
	{
		if(*(ptr+i)<small)
		{
		small=*(ptr+i);
	    }
	}
	return small;
 	
	}

int main()
{
	int a[100],i,size;
	int *p;
	printf("Eneter the limit:");
	scanf("%d",&size);
	printf("Enter the numbers:\n");
	for(i=0;i<size;i++)
	scanf("%d",&a[i]);
	 p=a;
	int small= smallest(p,size);
	printf("The samllest number in the list %d",small);
	return 0;
	
	
	}
