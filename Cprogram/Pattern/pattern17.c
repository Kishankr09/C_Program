#include<stdio.h>
#include<conio.h>
main(){
	int i,j,n,ch='A';
	printf("Enter The Number ");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		for(j = 1; j<=i; j++){
			if(i==n || j==i || j == 1)
				printf("* ");
			else
				printf("%c ",ch++);
		}
		printf("\n");
	}
}
