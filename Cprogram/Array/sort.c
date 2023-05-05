#include<stdio.h>
#include<conio.h>
main(){
	int n,i,j,t;
	printf("Enter any Number ");
	scanf("%d",&n);
	int arr[n];
	for(i = 0; i<n; i++){
		printf("element - %d  ",i);
		scanf("%d",&arr[i]);
	}
	for(i = 1; i<n; i++){
		for(j=0; j<n-1; j++) {
			if(arr[j] > arr[j+1])
			{
				t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
		}
		
	}
	puts("Sorted");
	for(i = 0; i<n; i++)
		printf("%d\t",arr[i]);
}
