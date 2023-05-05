#include<stdio.h>
#include<conio.h>
main(){
	int i,j,n,k=-1;
	printf("Enter The Number ");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		k = i;
		for(j = 1; j<=i; j++){
				printf("%d ",k);
				k +=2;	
		}
		printf("\n");
	}
}
