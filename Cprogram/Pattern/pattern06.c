#include<stdio.h>
main(){
	int i,j,n,k;
	printf("Enter The Limit  ");
	scanf("%d",&n);
	for(i= 1; i<=n; i++){
		for(j =1; j<=n-i; j++)
			printf("1 ");	
		for(j = 1; j<=i; j++)
			printf("%d ",i);
		printf("\n");
	}
}
