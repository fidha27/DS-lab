#include <stdio.h>

void main()
 {
    int N, nums[30], key, i,low,high,mid; 
    printf("Enter N: ");
    scanf("%d", &N);
    printf("Enter sorted numbers list: ");
    for (i = 0; i < N; i++)
        scanf(" %d", &nums[i]);

    printf("Enter number to search: ");
    scanf(" %d", &key);
    high=0;
    low = N - 1;
    mid=(high+low)/2;
    while(high <=low) {
       // middle = top + (bottom - top) / 2;
        if(nums[mid] < key)
            high = mid + 1;
        //else if(nums[middle] > key)
        else if(nums[mid]==key){
			printf("%d is found at location %d",key,mid+1);
			break;
			}
			else
            low = mid - 1;
            mid=(high+low)/2;
		}
        if(high>low)
        printf("not found! %d isn't present in th list\n",key);
       
}
