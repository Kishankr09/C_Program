#include<stdio.h>
main(){
	int i,j,n,k;
	printf("Enter The Limit  ");
	scanf("%d",&n);
	for(i= 1; i<=n; i++){
		for(k=i,j =1; j<=n; j++){
			printf("%d ",k++);	
		}
		printf("\n");
	}
}
