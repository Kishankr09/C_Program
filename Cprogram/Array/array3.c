#include<stdio.h>
#include<conio.h>
main(){
	int n,arr[100],i,max=-32767;
	printf("Enter the Size of The array\t");
	scanf("%d",&n);
	for(i = 0; i<n; i++)
	{
		scanf("%d",&arr[i]);
		if(max < arr[i])
			max = arr[i];
	}
	printf("Max Value is %d",max);	
}
