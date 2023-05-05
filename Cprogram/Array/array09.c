#include<stdio.h>
#include<conio.h>
main(){
	int n,i,j,c;
	printf("Enter any Number ");
	scanf("%d",&n);
	int arr[n];
	for(i = 0; i<n; i++){
		printf("element - %d  ",i);
		scanf("%d",&arr[i]);
	}
	for(i = 0; i<n; i++){
		for(c=0,j=i+1; j<n; j++) {
			if(arr[i] > arr[j])
				c++;
			else
			{
				c = 0;
				break;	
			}	
		}
		if(c > 0)
			printf("%d  ",arr[i]);
				
	}
}
