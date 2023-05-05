#include<stdio.h>
#include<conio.h>
main(){
	int n,arr[100],i,c,j;
	printf("Enter the Size of The array\t");
	scanf("%d",&n);
	for(i = 0; i<n; i++)
		scanf("%d",&arr[i]);	
	for(i = 0; i<n; i++)
	 {
	 	for(c = 0,j = 2; j<=arr[i]/2; j++){
	 		if(arr[i] % j == 0)
	 		{
	 			c++;
				break;	
			}
	 	}
	 if(c==0)
		printf("Prime %d\n",arr[i]);
	 else
	 	printf("Composit %d\n",arr[i]);	
	}
}
