#include<stdio.h>
#include<conio.h>
main(){
	int i,j,n,k;
	printf("Enter The Value\t");
	scanf("%d",&n);
	for(i= 1; i<= n; i++){
		for(j = 1; j<=n; j++){
			if(i == n/2+1)
				printf("*");
			else if(j == n/2+1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
