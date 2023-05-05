#include<stdio.h>
#include<conio.h>
main(){
	int n,arr[100],i,min=32767;
	printf("Enter the Size of The array\t");
	scanf("%d",&n);
	for(i = 0; i<n; i++)
	{
		scanf("%d",&arr[i]);
		if(min > arr[i])
			min = arr[i];
	}
	printf("Min Value is %d",min);	
}
