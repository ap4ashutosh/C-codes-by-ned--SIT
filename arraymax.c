#include<stdio.h>
int main()
{
	int i,arr[5],max,min;
	printf("\nenter any five element no");
	for(i=0;i<5;i++)
	{
		scanf("%d", &arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=1;i<5;i++)
	{
	 if(max<arr[i])
	 	max=arr[i];
	 else if(min>arr[i])
		 min=arr[i];
	}
	printf("\nmaximum element=%d",max);
	printf("\nminimum element=%d",min);	
	return 0;
}

