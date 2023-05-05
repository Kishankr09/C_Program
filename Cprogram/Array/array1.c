#include<stdio.h>
#include<conio.h>
main(){
	int n,arr1[100],i,arr2[100];
	printf("Enter the Size of The array\t");
	scanf("%d",&n);
	for(i = 0; i<n; i++)
		scanf("%d",&arr1[i]);
	for(i =0; i<n; i++)
		arr2[i] = arr1[i];
		printf("Copied 1 array to another array\n");
	for(i = 0; i<n; i++)
		printf("%d\n",arr2[i]);
}
