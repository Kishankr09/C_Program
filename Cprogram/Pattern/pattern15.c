#include<stdio.h>
#include<conio.h>
main(){
	int i,j,n;
	printf("Enter The Number ");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		for(j = 1; j<=i; j++){
			if((i+j)%2==0)
				printf("$");
			else
				printf("*");
		}
		printf("\n");
	}
}
